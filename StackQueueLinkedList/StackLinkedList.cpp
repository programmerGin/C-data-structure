#include "LinkedStack.h"

void main() {
	LinkedStack stack;
	stack.push(new Node(176150, (char*)"È«È«È«", (char*)"ÄÄ°ø"));
	stack.push(new Node(176151, (char*)"ÀÌÀÌÀÌ", (char*)"±â°ø"));
	stack.push(new Node(176152, (char*)"È²È²", (char*)"¹ýÇÐ"));
	stack.display();

	Node* node = stack.pop();
	printf("[PopÇ×¸ñ]\n");
	node->display();
	printf("\n");
	delete node;
	stack.display();
}