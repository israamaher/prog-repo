
#include "linkedList.h"
#include <iostream>
#include <assert.h>
using namespace std;

void linkedList::append(int val)
{
	Node* newNode = new Node(val);
	if (head == nullptr)
	{
		head = newNode;
	}
	else
	{
		Node* currentNode = head;
		while (currentNode->next != nullptr)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = newNode;
	}

	size++;
}



void linkedList::print()
{
	Node* currentNode = head;
	while (currentNode != nullptr)
	{
		cout << currentNode->value <<endl;
		currentNode = currentNode->next;
	}
}


void linkedList::insert(int idx, int val)
{
		assert(idx >= 0 && idx <= size);
		Node* newNode = new Node(val);

		if (idx == 0)
		{
			newNode->next = head;
			head = newNode;
		}
		else
		{
			Node* currentNode = head;
			int i = 0;
			while (i < idx - 1)
			{
				currentNode = currentNode->next;
				i++;
			}
			newNode->next = currentNode->next;
			currentNode->next = newNode;
		}
		size++;
}

void linkedList::removeAt(int idx)
{
	assert(idx > 0 && idx < size);
	if (idx == 0)
	{
	Node* currentNode = head->next;
	delete head;
	head = currentNode;
	}
	else
	{
			Node* befor = head;

		for (int i = 0; i < idx - 1; i++)
		{
			befor = befor->next;
		}

		Node* after= befor->next->next;
		delete befor->next;
		befor->next = after;
		size--;

	}





}



linkedList::linkedList():head(nullptr),size(0)
{
}

linkedList::~linkedList()
{
	
	 while (head != nullptr)
	 {
		 Node* tmp= head->next;
		 delete head;
		 tmp = head;
	}
}
