#include "Queue.h"
#include<string>
#include<iostream>
using namespace std;
void Queue::Enqueue(int a)
{
	try
	{
		Node* newnode = new Node();
		newnode->setObject(a);
		newnode->setNext(nullptr);
		if (front == nullptr)
		{
			front = rear = newnode;
		}
		else
		{
			rear->setNext(newnode);
			rear = newnode;
		}
	}
	catch (exception e)
	{
		cout << "Enqueue was not successful" << endl;
	}
}
int Queue::Dequeue()
{
	try
	{
		int temp = front->getObject();
		Node* t = front;
		front = front->getNext();
		delete t;
		return temp;
	}
	catch (exception e)
	{
		cout << " Dequeue was not successful " << endl;
	}
}
int Queue::Front()
{
	try
	{
		if (!isEmpty())
			return front->getObject();
		else
			cout << "Queue is Empty" << endl;
	}
	catch (exception e)
	{
		cout << "Front was not successful " << endl;
	}
}
int Queue::Rear()
{
	try
	{
		if(!isEmpty())
			return rear->getObject();
		else
		cout << "Queue is Empty" << endl;
	}
	catch (exception e)
	{
		cout << " Rear was not successful " << endl;
	}
}
bool Queue::isEmpty()
{
	return (front == nullptr);
}

	