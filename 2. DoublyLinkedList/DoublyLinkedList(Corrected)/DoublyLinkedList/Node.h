#pragma once
#include<iostream>
using namespace std;
class Node
{
	int numoffingers;
	string name;
	Node *next;
	Node *prev;
public:
	Node()
	{
		numoffingers = 0;
		next = nullptr;
		prev = nullptr;
		name = "N/A";
	}
	void setFingers(int o)
	{
		numoffingers = o;
	}
	int getFingers()
	{
		return numoffingers;
	}
	void setNext(Node *n)
	{
		next = n;
	}
	Node *getNext()
	{
		return next;
	}
	void setPrev(Node *p)
	{
		prev = p;
	}
	Node* getPrev()
	{
		return prev;
	}
	void setName(string n)
	{
		name = n;
	}
	string getName()
	{
		return name;
	}
};