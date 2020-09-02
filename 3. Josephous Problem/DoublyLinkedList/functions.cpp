#include "list.h"
#include<string>
#include<iostream>
using namespace std;
void list::Insert(int n)
{
	totalnum = n;
	for (int i = 0; i < n; i++)
	{
		int a; string s;
		Node* newnode = new Node();
		cout << "\nEnter The Name of The Person: ";
		cin.ignore();
		getline(cin, s);
		do
		{
			cout << "\nEnter Number of Fingers Open: ";
			cin >> a;
			if (!(a >= 1 && a <= 5))
				cout << " Fingers SHould be between 1 & 5 ";
		} while (!(a >= 1 && a <= 5));
		newnode->setName(s);
		newnode->setFingers(a);
		if (headnode == nullptr)
		{
			headnode = newnode;
			headnode->setNext(newnode);
			headnode->setPrev(newnode);
			currentnode = headnode;
		}
		else
		{
			newnode->setPrev(currentnode);
			newnode->setNext(headnode);
			currentnode->setNext(newnode);
			headnode->setPrev(newnode);
			currentnode = newnode;
		}
	}
}
void list::Display(Node* t,int jj)
{

	cout << "\n_________________________________________________________________________________\n";
	cout << "|Position is " << jj << "\t\t\t\t\t\t\t\t\t|\n";
	cout << "|\t\tName of Player is " << t->getName() << "\t\t\t\t\t\t|\n|\t\tNumber of Fingers Open: " << t->getFingers() << "\t\t\t\t\t|";
	cout << "\n_________________________________________________________________________________\n";

}
void list::Display()
{
	
	Node *temp;
	temp = headnode;
	int i = 0;
	while (i < totalnum )
	{
		cout << "\n_________________________________________________________________________________\n";
		cout << "|\t\tName of Player "<<i+1<<" is " << temp->getName() << "\t\t\t\t|\n| Number of Fingers Open: " << temp->getFingers() << "\t\t\t\t\t|";
		cout << "\n_________________________________________________________________________________\n";
		temp = temp->getNext();
		i++;
	}
}
int list::SumFingers()
{
	Node* temp;
	temp = headnode;
	int sum = 0;
	for (int i = 0; i < totalnum; i++)
	{
		sum += temp->getFingers();
	}
	return sum;
}
void list::Play()
{
	int jj = 1;
	int sum = SumFingers();
	Node* temp = headnode;
	for (int i = 0; i < totalnum; i++)
	{
		for (int i = 0; i < sum; i++)
		{
			temp = temp->getNext();
		}
		currentnode = temp;
		Display(temp,jj);
		jj++;
		Del();
	}
}
int list::Del()
{
	if (totalnum != 0)
	{
		(currentnode->getPrev())->setNext(currentnode->getNext());
		(currentnode->getNext())->setPrev(currentnode->getPrev());
		currentnode = currentnode->getNext();
		return 1;
	}
	else
		cout << endl << " Your List is Empty " << endl;
	return 0;
}
	