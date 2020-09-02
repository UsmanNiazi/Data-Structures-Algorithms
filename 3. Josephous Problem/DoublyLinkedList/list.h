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
	int Del();
	void Insert();
	
	void Get();
	void Display();
	void Display(Node* t,int jj);
	int SumFingers();
	void Play();
	void Insert(int n);
	int totalnum;
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