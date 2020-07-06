#pragma once
#include <iostream>
#include <assert.h>
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
	void removeAt(int idx);
	linkedList();
	~linkedList();
};

