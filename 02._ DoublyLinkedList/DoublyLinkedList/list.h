#pragma once
#include "Node.h"
#include<iostream>
using namespace std;
class list
{
	// By default private
	Node *headnode;
	Node *currentnode;
	int size;
public:
	int getSize();
	void Insert();
	void Size();
	void Get();
	void Display();
	void Start();
	void Next();
	void Tail();
	void Remove();
	void Update(string ce);
	void Back();
	bool Find(string x);

	list()
	{
		size = 0;
		headnode = nullptr;
		currentnode = nullptr;
	}
	~list()
	{

	}

};