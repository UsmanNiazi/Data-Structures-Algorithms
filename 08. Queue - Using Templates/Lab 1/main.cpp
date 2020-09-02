#include<iostream>
#include "function.cpp"
using namespace std;
int main()
{

	Queue<int> intqueue; 
	//Stack<char> charstack;
	
	int n;
	int f;
	//this
	//float f;
	do
	{
		cout << "\n-------------------------------------------------------------------------------------\n";
		cout << "\nChoose An option\n";
		cout << "1-Enqueue\n2-Dequeue\n3-Check if Queue is empty\n4-Check if Queue is full\n5-Front\n6-Display\n7-Exit\n";
		cin >> n;
		cout << "\n-------------------------------------------------------------------------------------\n";
		switch (n)
		{
		case 1:
			//this-------------------------------------------------
			//float v;
			int v;
			cout << "\nEnter Value: ";
			cin >> v;
			intqueue.Enqueue(v);
			break;
		case 2:
			f = intqueue.Dequeue();
			if(f != 0)
				cout<<"\nValue Dequeued is :" << f;
			break;
		case 3:
			if (intqueue.isEmpty() == 1)
				cout << "\nList is Empty\n";
			else
				cout << "\nList is Not Empty\n";
			break;
		case 4:

			if (intqueue.isFull() == 1)
				cout << "\nList is Full\n";
			else
				cout << "\nList is Not Full\n";
			break;
		case 5:
			if (intqueue.isEmpty() == 0)
				cout << "\nFront is : " << intqueue.isFront();
			else
				cout << "\nList is Empty\n";
			break;
		case 6:
			if (intqueue.isEmpty() == 0)
				intqueue.Display();
			else
				cout << "\nList is Empty\n";
			break;
		case 7:
			intqueue.Exit();
			break;
		default:
			cout << "Wrong Option";
			continue;
		}
	} while (n != 7);
}