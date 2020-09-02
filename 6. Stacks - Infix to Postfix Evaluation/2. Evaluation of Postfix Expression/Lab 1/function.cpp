#include "Stack.h"
#include<iostream>
using namespace std;
	//Made by Usman Khan
#define maxsize 50
template <class T>
Stack<T>::Stack()
{
	top = -1;
	A = new T[maxsize];
}
template <class T>
Stack<T>::~Stack()
{
	delete A;
}
template <class T>
void Stack<T>::Push(T s)
{ 
	if (isFull() == false)
	{
		top++;
		A[top] = s;
	}
	else
		cout << "\nStack Full\n";
}
template <class T>
T Stack<T>::Pop()
{
	if (isEmpty() == false)
	{
		T temp = A[top];
		top--;
		return temp;
	}
	else
		cout << "\nStack Empty\n";
		return 0;
}
template <class T>
bool Stack<T>::isEmpty()
{
	if (top == -1)
		return true;
	else
		return false;
}
template <class T>
bool Stack<T>::isFull()
{
	if (top == maxsize)
		return true;
	else
		return false;
}
template <class T>
T Stack<T>::TOS()
{
	if (isEmpty() == false)
		return A[top];
	else
		return 0;
}
template <class T>
void Stack<T>::Deallocate()
{
	if (top != -1)
	{
		if (A != nullptr)
		{
			delete A;
			top = -1;
			cout << "\nDe allocated Successfully.\n";
			cout << "Thank You , Allah Hafiz";
		}
		else
			cout << "\nAllocate List First";
	}
	else
		cout << "\nAllocate the list First";
}
template <class T>
void Stack<T>::Exit()
{
	Deallocate();
}
	