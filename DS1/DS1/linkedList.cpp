
#include "linkedList.h"

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
		while (currentNode != nullptr)
		{
			currentNode = currentNode->next;
		}
		currentNode = newNode;
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

void linkedList::removeAt(int val)
{
	Node* currentNode = head;
	while (currentNode != nullptr)
	{
		if (currentNode->value == val)
		{
			Node* lastNode = currentNode-1;
			cout << lastNode;

		}
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
