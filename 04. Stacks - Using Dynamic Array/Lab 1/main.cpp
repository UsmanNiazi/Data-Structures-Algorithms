#include<iostream>
#include "Stack.h"
using namespace std;
int main()
{
	Stack l = Stack() ; 
	char test;
	int option;
	do
	{
		cout << endl << "---------------------------------------------------------" << endl;
		cout <<endl<< "1 Create Stack" << endl;
		cout << "2 Push" << endl;
		cout << "3 Pop" << endl;
		cout << "4 TOS" << endl;
		cout << "5 isEmpty" << endl;
		cout << "6 isFull" << endl;
		cout << "7 Display" << endl;
		cout << "8 Deallocate" << endl;
		cout << "9 Exit" << endl;
		cin >> option;
		/* this was created by Usman Khan*/
		cout << endl << "---------------------------------------------------------" << endl<<endl;
		switch (option)
		{
			case 1:
				cout << "Create List" << endl <<endl<< "---------------------------------------------------------" << endl;
				l.CreateList();
				break;
			case 2:
				l.Push();
				break;
			case 3:
				if (l.isEmpty() == 0)
					cout << endl << "Value Popped is " << l.Pop();
				else
					cout << endl << "Value Not Popped";
				break;
			case 4:
				cout << l.TOS();;
				break;
			case 5:
				if (l.isEmpty() == true)
					cout <<endl << "List is empty";
				else
					cout << "Not empty ";
				break;
			case 6:
				if (l.isFull() == true)
					cout <<endl<< "List is Full";
				else
					cout <<endl<< "Not Full ";
				break;
			case 7:
				l.Display();
				break;
			case 8:
				l.Deallocate();
				break;
			case 9:
				cout << "Allah HAfiz" << endl; 
				l.Exit();
				break;
			default:
				cout << " Wrong Option";		
		}
	} while (option != 9);
}