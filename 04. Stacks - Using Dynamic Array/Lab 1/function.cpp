#include "Stack.h"
#include<iostream>
using namespace std;
	//Made by Usman Khan
void Stack::CreateList()
{
	if (top == -1)
	{
		do
		{
			cout << "Enter the Maximum Limit of your list ";
			cin >> max;
			if (max <= 0)
			{
				cout << "\n Number should not be less than or equal to 0\n";
				continue;
			}
			if (int(max) == true)
			{
				cout << "You Have to enter an integer";
				continue;
			}
			break;
		} while (max != 0 && int(max) == true);
		A = new char[top + max];
		top++;
		cout << endl << "List Has been Successfully Generated " << endl;
	}
	else
		cout << " Your List is already Generated, you have to Deallocate it first " << endl;
	}
void Stack::Push()
{
	if (top != -1)
	{
		if (isFull() == false)
		{
			char value;
			cout << endl << "Enter the Value That you want to push: ";
			cin >> value;
			A[top] = value;
			top++;
			cout << "Value Entered Successfully" << endl;
		}
		else
			cout << "Your Stack is full" << endl;
	}
	else
		cout << "Create List First";
}
char Stack::Pop()
{
	if (top != -1)
	{
		if (top != -1 || isEmpty() == false)
		{
			char temp = A[top - 1];
			top--;
			return temp;
		}
		else
			cout << "Insert Values First";
	}
	else
		cout << "Allocate the list First" << endl;
}
bool Stack::isEmpty()
{
	if (!(top <= 0))
	{
		return false;
	}
	else
		cout << "Allocate the list first"<<endl;
	return true;
}
bool Stack::isFull()
{
	if (top != -1)
	{
		if (top == max)
			return true;
		else
			return false;
	}
	else
		cout << "Allocate the list First";
	return true;
}
char Stack::TOS()
{
	if (top != -1)
	{
		if (isEmpty() == false)
		{
			cout << "Value is " << A[top-1];
			return A[top-1];
		}
		else
		{
			cout << "Insert Values First";
		}
	}
	else
		cout << "Allocate the list first";
	return 0;
}

void Stack::Display()
{
	if (top != -1)
	{
		if (isEmpty() == false)
		{
			for (int i = 0; i < top; i++)
			{
				cout << endl << " Value at index [" << i << "] is  " << A[i] << endl;
			}
		}
		else
			cout << "Insert Values First";
	}
	else
		cout << "Create Allocate List first";
}
void Stack::Deallocate()
{
	if (top != -1)
	{
		if (A != nullptr)
		{
			delete[] A;
			max = 0;
			top = -1;
			cout << "De allocated Successfully.";
		}
		else
			cout << "Allocate List First";
	}
	else
		cout << "Allocate the list First";
}
void Stack::Exit()
	{
		cout << "Thank You , Allah Hafiz";
		Deallocate();
	}
	