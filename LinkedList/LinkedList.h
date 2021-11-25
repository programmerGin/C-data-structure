#pragma once
#include "Node.h"
class LinkedList {
	Node org;
public:
	LinkedList() : org(0) {}
	~LinkedList() { clear(); }
	void clear() { while (!isEmpty()) delete remove(0); }
	Node* getHead() { return org.getLink(); }
	bool isEmpty() { return getHead() == NULL; }

	//pos 번째 항목을 반환함
	Node* getEntry(int pos) {
		Node* n = &org;
		printf(" => 노드확인 %p\n ", &org);
		for (int i = -1; i < pos; i++, n = n->getLink())
			if (n == NULL) break;
		return n;
	}

	void insert(int pos, Node* n) {
		Node* prev = getEntry(pos - 1);
		if (prev != NULL)
			prev->insertNext(n);
	}

	Node* remove(int pos) {
		Node* prev = getEntry(pos - 1);
		return prev->removeNext();

	}

	Node* find(int val) {
		for (Node* p = getHead(); p != NULL; p = p->getLink())
			if (p->hasData(val)) return p;
		return NULL;
	}

	void replace(int pos, Node* n) {
		Node* prev = getEntry(pos - 1);
		if (prev != NULL) {
			delete prev->removeNext();
			prev->insertNext(n);
		}
	}
	int size() {
		int count = 0;
		for (Node* p = getHead(); p != NULL; p = p->getLink())
			count++;
		return count;
	}

	void display() {
		printf("[전체 항목 수 = %2d] : ", size());
		for (Node* p = getHead(); p != NULL; p = p->getLink())
		{
			printf("\n");
			p->display();
			printf("삽입된주소=> %d\n", p); //p->getLink() 로 뽑으면 다음값 찍힘 
		}
		printf("\n");
	}


};
