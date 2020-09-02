#include "Queue.h"
#include<string>
#include<iostream>
using namespace std;
void Queue::Enqueue(int a,int p)
{
	try
	{
		Node* newnode = new Node();
		newnode->setObject(a);
		newnode->setPrior(p);
		newnode->setNext(nullptr);
		if (front == nullptr)
		{
			front = rear = newnode;
		}
		else if (front->getPrior() == rear->getPrior())
		{
			if (p < front->getPrior())
			{
				newnode->setNext(front);
				front = newnode;
			}
			else if (p >= rear->getPrior())
			{
				rear->setNext(newnode);
				rear = newnode;
			}
		}
		else
		{
			if (p < front->getPrior())
			{
				newnode->setNext(front);
				front = newnode;
			}
			else if (p >= rear->getPrior())
			{
				rear->setNext(newnode);
				rear = newnode;
			}
			else
			{
				Node* current = front;
				Node* lcn = front;
				while (current)
				{
					if (current->getNext() == nullptr)
					{
						
					}
					else if ((current->getNext())->getPrior() > p)
					{
						newnode->setNext(current->getNext());
						current->setNext(newnode);
						break;
					}
					else if (current->getPrior() == p ) //&& !((current->getNext())->getPrior() > p))
					{
						while (current->getPrior() <= p)
						{
							lcn = current;
							current = current->getNext();
						}
						newnode->setNext(lcn->getNext());
						lcn->setNext(newnode);
						break;
						//newnode->setNext(current->getNext());
						//current->setNext(newnode);
					}
					/*else if (current->getPrior() == p && (current->getNext())->getPrior() > p)
					{
						newnode->setNext(current->getNext());
						current->setNext(newnode);
					
					}*/
					current = current->getNext();
				}
			}
		}
		size += 1;
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
		size -= 1;
		return temp;
	}
	catch (exception e)
	{
		cout << " Dequeue was not successful " << endl;
		return 0;
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
		return 0;
	}
	catch (exception e)
	{
		cout << "Front was not successful " << endl;
		return 0;
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
		return 0;
	}
	catch (exception e)
	{
		cout << " Rear was not successful " << endl;
		return 0;
	}
}
bool Queue::isEmpty()
{
	return (front == nullptr);
}
void Queue::Display()
{
	try
	{
		if (!isEmpty())
		{
			Node* current;
			current = front;
			cout << "\nValue \t\t Priority\n";
			while (current)
			{
				cout << current->getObject()<<" \t\t "<<current->getPrior() << endl;
				current = current->getNext();
			}
		}
		else
			cout << "Queue is Empty" << endl;
	}
	catch (exception e)
	{
		cout << " Display was not successful " << endl;
	}
}
int Queue::Find(int v)
{
	try
	{
		if (!isEmpty())
		{
			int temp = 0,pos = 1;
			Node* current;
			current = front;
			while (current)
			{
				if (v == current->getObject())
					return pos;
				else
				{
					pos += 1;
					current = current->getNext();
				}
			}
			return 0;
		}
		else
			cout << "Queue is Empty" << endl;
	}
	catch (exception e)
	{
		cout << " Find was not successful " << endl;
	}
}
int Queue::Size()
{
	if (size)
	{
		return size;
	}
	else
	{
		cout << "Queue is Empty" << endl;
		return 0;
	}
}