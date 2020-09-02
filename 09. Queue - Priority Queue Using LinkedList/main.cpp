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
		cout << "2- Dequeue" << endl;
		cout << "3- Front" << endl;
		cout << "4- Is Empty" << endl;
		cout << "5- Find" << endl;
		cout << "6- Size" << endl;
		cout << "7- Display" << endl;
		cout << "8- Rear" << endl;
		cout << "9- Exit" << endl;
		cin >> option;
		cout << endl << "______________________________________________________________" << endl << endl;
		switch (option)
		{
		case 1:
			cout << "Enqueue" << endl;
			int f,prio;
			cout << "\nEnter Value: ";
			cin >> f;
			cout << endl << "Enter Priority: ";
			cin >> prio;
			q.Enqueue(f,prio);
			break;
		case 2:
			if (q.isEmpty())
				cout << "\nQueue is Empty. Please Enqueue some values first \n";
			else
				cout << "Value Dequeued is " << q.Dequeue();
			break;

		case 3:
			if (q.isEmpty())
				cout << "\nQueue is Empty. Please Enqueue some values first \n";
			else
				cout << "Value at Front is " << q.Front() << endl;
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
			{
				int v, pos;
				cout << endl << "Enter Value that you want to Find: ";
				cin >> v;
				pos = q.Find(v);
				if (pos)
					cout << "\nValue Found at position " << pos << endl;
				else
					cout << endl << "Value was not found" << endl;
			}
			break;
		case 6:
			if (q.isEmpty())
				cout << "\nQueue is Empty. Please Enqueue some values first \n";
			else
				cout << endl << "Size of the Queue is " << q.Size() << endl;
			break;
		case 7:
			if (q.isEmpty())
				cout << "\nQueue is Empty. Please Enqueue some values first \n";
			else
				q.Display();
			break;
		case 8:
			if (q.isEmpty())
				cout << "\nQueue is Empty. Please Enqueue some values first \n";
			else
				cout << "Value at Rear is " << q.Rear() << endl;
			break;
		case 9:
			break;
		default:
			cout << " Wrong Option";
		}
	} while (option != 9);
}