#include<bits/stdc++.h>
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

void insertAtEnd(node* & tail, int d) {
  node*temp = new node(d);
  tail->next = temp;
  temp->next = NULL;
  tail = temp;
}

void print(node*&head) {
  node*temp = head;
  while (temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
}
int main() {
  node*node1 = new node(1);//starting mein yahi head hoga or yahi tail hoga;
  node*head = node1;
  node*tail = node1;

  insertAtEnd(tail, 2);
  insertAtEnd(tail, 3);
  insertAtEnd(tail, 4);
  insertAtEnd(tail, 5);
  insertAtEnd(tail, 6);

  print(head);
  return 0;
}