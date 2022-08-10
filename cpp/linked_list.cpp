#include <iostream>
using namespace std;

class Node {
	public: 
		int value;
		Node* next;
};

void print_list(Node* a) {
	while (a != NULL) {
		cout << a->value << " ";
		a = a->next;
	}
}

int main () {
	Node* teste = new Node();
	print_list(teste);
	return 0;
}
