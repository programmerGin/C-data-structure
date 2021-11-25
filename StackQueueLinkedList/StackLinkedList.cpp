#include "LinkedStack.h"

void main() {
	LinkedStack stack;
	stack.push(new Node(176150, (char*)"ȫȫȫ", (char*)"�İ�"));
	stack.push(new Node(176151, (char*)"������", (char*)"���"));
	stack.push(new Node(176152, (char*)"ȲȲ", (char*)"����"));
	stack.display();

	Node* node = stack.pop();
	printf("[Pop�׸�]\n");
	node->display();
	printf("\n");
	delete node;
	stack.display();
}