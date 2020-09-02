#pragma once
#include "Node.h"
class list
{
	// By default private
	Node *headnode;
	Node *currentnode;
	Node *lastCN;
public:
	void Insert();
	void Display();
	void Start();
	void Next();
	void Tail();
	void Get();
	void Back();
	void recurse(Node *n);
	void call();

	list()
	{
		headnode = nullptr;
		currentnode = nullptr;
		lastCN = nullptr;
	}
	~list()
	{

	}

};