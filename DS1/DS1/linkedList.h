#pragma once
#include <iostream>

#include "Node.h"
using namespace std;
class linkedList
{
private:
	Node* head;
	int size = 0;
public:
	void append(int val);
	void print();
	void insert(int idx, int val);
	void removeAt(int idx);
	linkedList();
	~linkedList();
};

