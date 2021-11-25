#include <cstdio>
#include <cstdlib>
#include <cstring>
#pragma warning(disable : 4996)
#define MAX_STRING 100

class Student {
	int id;
	char name[MAX_STRING];
	char dept[MAX_STRING];
public:
	Student(int i, char* n, char* d) { set(i, n, d); }
	void set(int i, char* n, char* d) {
		id = i;
		strcpy(name, n);
		strcpy(dept, d);
	}
	void display() {
		printf("�й�:%-15d ����:%-10s �а�:%-20s\n", id, name, dept);
	}
};