#include<iostream>
using namespace std;

class node {
public:
  int data;
  node*next;
  node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

void insertAtBegning(node*&head, int d) {
  node*temp = new node(d);
  temp->next = head;
  head = temp;
}

void insertAtEnd(node*&tail, int d) {
  node*temp = new node(d);
  tail->next = temp;
  temp->next = NULL;
  tail = temp;
}

void insertInMidpos(node*&head, node*&tail, int pos, int d) {

  if (pos == 1) {
    insertAtBegning(head, d);
    return;
  }
  node*temp = head;
  int count = 1;
  while (count < pos - 1) {
    count++;
    temp = temp->next;
  }
  if (temp->next == NULL) {
    insertAtEnd(tail, d);
    return;
  }
  node*insertMidEle = new node(d);
  insertMidEle->next = temp->next;
  temp->next = insertMidEle;
}

void print(node*&head) {
  node*temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
}
int main() {
  node*first = new node(5);
  node*head = first;
  node*tail = first;

  insertAtBegning(head, 4); insertAtBegning(head, 3); insertAtBegning(head, 2); insertAtBegning(head, 1);
  insertAtEnd(tail, 6); insertAtEnd(tail, 7); insertAtEnd(tail, 8); insertAtEnd(tail, 9); insertAtEnd(tail, 10);
  insertInMidpos(head, tail, 3, 78); insertInMidpos(head, tail, 5, 88); insertInMidpos(head, tail, 13, 8978); insertInMidpos(head, tail, 1, -11);
  print(head);
  cout << endl;
  cout << "Your head element is : " << head->data << endl;
  cout << "Your tail element is : " << tail->data << endl;
  return 0;
}