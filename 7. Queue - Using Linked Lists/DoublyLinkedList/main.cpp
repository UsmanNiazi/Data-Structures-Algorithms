#include<iostream>
#include "Queue.h"
using namespace std;
int main()
{
	Queue q;
	int option;
	do
	{
		cout << endl << " ____________________________MENU___________________________________ " << endl;
		cout << endl << "1- Enqueue" << endl;
		cout << "2- Front" << endl;
		cout << "3- Rear" << endl;
		cout << "4- Empty" << endl;
		cout << "5- Dequeue" << endl;
		cin >> option;
		cout << endl << "______________________________________________________________" << endl << endl;
		switch (option)
		{
		case 1:
			cout << "Enqueue" << endl;
			int f;
			cout << "\nEnter Value: ";
			cin >> f;
			q.Enqueue(f);
			break;
		case 2:
			if (q.isEmpty())
				cout << "\nQueue is Empty. Please Enqueue some values first \n";
			else
				cout << "Value at Front is " << q.Front() << endl;
			break;
		case 3:
			if (q.isEmpty())
				cout << "\nQueue is Empty. Please Enqueue some values first \n";
			else
				cout << "Value at Rear is " << q.Rear() << endl;
			break;
		case 4:
			if (q.isEmpty())
				cout << "\nQueue is Empty.\n";
			else
				cout << "\nQueue is not Empty.\n";
			break;
		case 5:
			if (q.isEmpty())
				cout << "\nQueue is Empty. Please Enqueue some values first \n";
			else
				cout << "Value Dequeued is " << q.Dequeue();
			break;
		case 6:
			break;
		default:
			cout << " Wrong Option";
		}
	} while (option != 6);
}