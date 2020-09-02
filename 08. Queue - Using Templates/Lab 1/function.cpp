#include "Queue.h"
#include<iostream>
using namespace std;
	//Made by Usman Khan
#define limit 3
template <class T>
Queue<T>::Queue()
{
	front = -1;
	rear = -1;
	numofelements = 0;
	size = limit;
	A = new T[size];
}
template <class T>
Queue<T>::~Queue()
{
	delete A;
}
template <class T>
void Queue<T>::Enqueue(T s)
{ 
	if (isFull() == false)
	{
		if (front == -1)
		{
			front = 0;
		}
		rear = (rear + 1) % size;
		A[rear] = s;
		numofelements = numofelements + 1;
	}
	else
		cout << "\nQueue is full\n";
}
template <class T>
T Queue<T>::Dequeue()
{
	if (isEmpty() == false)
	{
		T sn = A[front];
		front = (front + 1) % size;
		numofelements = numofelements-1;
		return sn;
	}
	else
		cout << "\nQueue Empty\n";
	return 0;
}
template <class T>
bool Queue<T>::isEmpty()
{
	if (numofelements == 0)
		return true;
	else
		return false;
}
template <class T>
bool Queue<T>::isFull()
{
	if (numofelements == size)
		return true;
	else
		return false;
}
template <class T>
T Queue<T>::isFront()
{
	if (isEmpty() == false)
		return A[front];
	else
		return 0;
}

template <class T>
void Queue<T>::Display()
{
	if (isEmpty() == false)
	{
		cout << "\n Display List\n";
		for (int i = front; i <= rear; i++)
		{
			cout << endl << A[i] << endl;
		}
	}
}
template <class T>
void Queue<T>::Deallocate()
{
	if (rear != -1)
	{
		if (A != nullptr)
		{
			delete A;
			 front = rear= -1;
			cout << "\nDe allocated Successfully.\n";
			cout << "Thank You , Allah Hafiz";
		}
		else
			cout << "\nAllocate List First";
		cout << "\n Thank You \n";
		exit(0);
	}
	else
		cout << "\nAllocate the list First";
	exit(0);
}
template <class T>
void Queue<T>::Exit()
{
	Deallocate();
}
	