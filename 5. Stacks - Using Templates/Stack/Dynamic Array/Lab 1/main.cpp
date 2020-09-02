#include<iostream>
#include "function.cpp"
using namespace std;
int main()
{

	//Stack<int> intstack; 
	Stack<char> intstack;
	//this
	int n;
	char f;
	do
	{
		cout << "\n-------------------------------------------------------------------------------------\n";
		cout << "\nChoose An option\n";
		cout << "1-Push\n2-Pop\n3-Check if Stack is empty\n4-Check if Stack is full\n5-TOS\n6-Exit\n";
		cin >> n;
		cout << "\n-------------------------------------------------------------------------------------\n";
		switch (n)
		{
		case 1:
			//this
			char v;
			cout << "\nEnter Value: ";
			cin >> v;
			intstack.Push(v);
			break;
		case 2:
			f = intstack.Pop();
			if(f != 0)
				cout<<"\nValue Popped is :" << f;
			break;
		case 3:
			if (intstack.isEmpty() == 1)
				cout << "\nList is Empty\n";
			else
				cout << "\nList is Not Empty\n";
			break;
		case 4:

			if (intstack.isFull() == 1)
				cout << "\nList is Full\n";
			else
				cout << "\nList is Not Full\n";
			break;
		case 5:
			if (intstack.isEmpty() == 0)
				cout << "\nTOS: " << intstack.TOS();
			else
				cout << "\nList is Empty\n";
			break;
		case 6:
			intstack.Exit();
			break;
		default:
			cout << "Wrong Option";
			continue;
		}
	} while (n != 6);
}