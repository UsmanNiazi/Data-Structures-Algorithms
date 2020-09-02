#pragma once
class Node
{
	int object;
	Node *next;
public:
	Node()
	{
		object = 0;
		next = nullptr;
	}
	void setObject(int o)
	{
		object = o;
	}
	int getObject()
	{
		return object;
	}
	void setNext(Node *n)
	{
		next = n;
	}
	Node *getNext()
	{
		return next;
	}

};