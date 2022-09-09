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

void insertAtHead(node* &head, int d) { //yaha &head = reference of head isliye liya haii because mein nahi chahta koi copy bane jo bhi ho original LL mein ho;
  node*first = new node(d);
  first->next = head;
  head = first;
}

void print(node* &head) {
  node*temp = head;
  while (temp != NULL) {
    cout << temp->data << endl;
    temp = temp->next;
  }
}
int main() {
  node*node1 = new node(10);
  node*next = NULL;
  node*head = node1;

  insertAtHead(head, 12);
  insertAtHead(head, 14);
  insertAtHead(head, 16);
  insertAtHead(head, 18);
  insertAtHead(head, 20);

  print(head);
  return 0;
}