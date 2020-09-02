#include<iostream>
#include "list.h"
using namespace std;
int main()
{
	list l = list();
	int option;
	do
	{
		cout << endl << " ____________________________MENU___________________________________ "<< endl;
		cout <<endl<< "1- Insertion" << endl;
		cout << "2- Deletion" << endl;
		cout << "3- Update" << endl;
		cout << "4- Start" << endl;
		cout << "5- Next" << endl;
		cout << "6- Back" << endl;
		cout << "7- Tail" << endl;
		cout << "8- Find" << endl;
		cout << "9- Copy" << endl;
		cout << "10- Size/Length" << endl;
		cout << "11- Display list" << endl;
		cout << "12- Exit" << endl;
		cin >> option;
		cout << endl << "______________________________________________________________" << endl<<endl;
		switch (option)
		{
			case 1:
				cout << "Insertion" << endl;
				l.Insert();
				break;
			case 2:
				cout << "Deletion" << endl;
				break;
			case 3:
				cout << "Update" << endl;
				break;
			case 4:
				cout << "Start" << endl;
				break;
			case 5:
				cout << "Next" << endl;
				break;
			case 6:
				cout << "Back" << endl;
				break;
			case 7:
				cout << "Tail" << endl;
				break;
			case 8:
				cout << "Find" << endl;
				break;
			case 9:
				cout << " Get" << endl;
				break;
			case 10:
				cout << "size" << endl;
				break;
			case 11:
				cout << "display list" << endl;
				l.Display();
				break;
			case 12:
				cout << "Allah HAfiz" << endl;
				break;
			case 14:
				l.call();
			default:
				cout << " Wrong Option";		
		}
	} while (option != 12);
}