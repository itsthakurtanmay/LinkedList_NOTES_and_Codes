#include<iostream>
using namespace std;

class node {
public:
	int data;
	node*next;
};
int main() {
	node * first = new node();
//basically yaha first naam ke pointer banaya haii jo ki node type ka address store karega;
//or ye new ek keyword haii jo ki heap mein memory allocate karwata haii;
//toh humne yaha node type ki memory allocate karwaayi haii;
// toh is line ka exact meaning ki hume (node*) type ka data type banaya haii or first naam ka variable haii;
//jo address store karega --> vo address store karega ek node ka jo hume heap mein create kari haii;
//with the help of new keyword ;new keyword allow karta haii heap ke andar space allot karne ka;
	cout << first->data << endl;
	//abhi tak humne koi data pass nahi kiya toh randomly garbage value yaa 0 print karega;
	cout << first->next << endl;
	//or address bhi garbage hoga;kyu ki abhi tak humne plot liya haii randomly kahi bhi but usme
	//ghar nahi banaya ,toh vo randomly garbage value dega;
	return 0;
}