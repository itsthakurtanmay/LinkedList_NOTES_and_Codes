#include<iostream>
using namespace std;

class node {
public:
  int data;
  node*next;

  node(int data) {
    this->data = data;
    this->next = next;
  }
};

void insertAtBegning(node*&head, int d) {
  node*temp = new node(d);
  temp->next = head;
  head = temp;
}

void insertInMid(node*&tail, node*&head, int position, int d) {

  if (position == 1) {
    insertAtBegning(head, d);
    return;
  }
  node*temp = head;
  int count = 1;
  while (count < position - 1) {
    temp = temp->next;
    count++;
  }
  node *midnodes = new node(d);
  midnodes->next = temp->next;
  temp->next = midnodes;
}

void inserAtEnd(node*&tail, int d) {
  node*temp = new node(d);
  temp->next = NULL;
  tail->next = temp;
  tail = temp;
}


void print(node*head) {
  node*temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
}
int main() {
  node* first = new node(10);
  node*head = first;
  node*tail = first;

  insertAtBegning(head, 11);
  insertAtBegning(head, 12);
  insertAtBegning(head, 13);
  insertAtBegning(head, 14);
  insertAtBegning(head, 15);

  insertInMid(tail, head, 3, 22);

  inserAtEnd(tail, 9);
  inserAtEnd(tail, 8);
  inserAtEnd(tail, 7);
  inserAtEnd(tail, 6);
  inserAtEnd(tail, 5); inserAtEnd(tail, 4);
  print(head);
  cout << endl;
  cout << "Data of head is:" << head->data << endl;
  cout << "Data of tail is:" << tail->data << endl;

  return 0;
}