#include<iostream>
using namespace std;

class node {
public:
	int data;
	node*next;

	node(int data) {
		this->data = data;
		this ->next = NULL;
	}
};

void insertAtNode(node * &head, int d) {
	node*temp = new node(d);
	temp->next = head;
	head = temp;
}

void print(node * &head) {
	node*temp = head;
	while (temp != NULL) {
		cout << temp->data << endl;
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	node * head = NULL;
	node*node1 = new node(700);
	// cout << node1->data << endl;
	// cout << node1->next << endl;

	head = node1;

	insertAtNode(head, 12);
	insertAtNode(head, 15);
	print(head);
	return 0;
}