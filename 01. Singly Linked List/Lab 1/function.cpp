#include "list.h"
#include<iostream>
using namespace std;
void list::Insert()
{
	int c;
	do
	{
		cout << "\n_________________________Insert__________________________\n";
		cout << endl << "1- After the location \n2- Before the location \n3- Exit ";
		cin >> c;
		if (c == 1)
		{
			Node *newNode;
			int x;
			newNode = new Node();
			cout << "Enter Value ";
			cin >> x;
			newNode->setObject(x);
			newNode->setNext(nullptr);
			//3 situations start , mid , end

			//newNode->setNext(currentnode->getNext());
			if (headnode == nullptr)
			{
				headnode = newNode;
				currentnode = newNode;
				lastCN = newNode; // because there is no node before it
			}
			else
			{
				currentnode->setNext(newNode);
				lastCN = currentnode; //one node before the last one
				//currentnode = newNode; 
				currentnode = currentnode->getNext();
			}
		}
		else if (c == 2)
		{
			Node *newNode;
			int x;
			newNode = new Node();
			cout << "Enter Value ";
			cin >> x;
			newNode->setObject(x);
			if (currentnode != headnode)
			{
				newNode->setNext(lastCN->getNext());
				lastCN->setNext(newNode);
				currentnode = newNode;
			}
			else
			{
				newNode->setNext(currentnode);
				currentnode = headnode;
				lastCN = headnode;


			}
		}
	} while (c != 3);
}
void list::Display()
{
	Node *temp;
	temp = headnode;
	while (temp != nullptr)
	{
		cout << "Value is " << temp->getObject()<<endl;
		temp = temp->getNext();
	}
}
void list::Start()
{
	currentnode = headnode;
	lastCN = headnode;
	cout << "\nYou are at the first element now\n";
}
void list::Next()
{
	lastCN = currentnode;
	currentnode = currentnode->getNext();
	cout << "\n You are on the next element now\n";
}
void list::Tail()
{
	while (currentnode ->getNext() != 0)
	{
		lastCN = currentnode;
		currentnode = currentnode->getNext();
		cout << "\nYou are at the end now \n";
	}
}
void list::Get()
{
	cout << " Value At current location is " << currentnode->getObject();
}
void list::Back()
{
	Node* temp;
	temp = headnode;
	while (temp != nullptr)
	{

	}
}
void list::call()
{
	Node *n = headnode;
	recurse(n);
}
void list::recurse(Node *n)
{
	if (n == nullptr)
		return;
	else
	{
		recurse(n->getNext());
		cout << n->getObject();
	}
}