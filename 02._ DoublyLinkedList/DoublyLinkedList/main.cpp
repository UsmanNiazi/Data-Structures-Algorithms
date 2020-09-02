#include<iostream>
#include "list.h"
#include <string>
using namespace std;
int main()
{
	list l;
	string a;
	string u; string k;
	int option;
	do
	{
		cout << endl << " ____________________________MENU___________________________________ " << endl;
		cout << endl << "1- Insertion" << endl;
		cout << "2- Deletion" << endl;
		cout << "3- Update" << endl;
		cout << "4- Start" << endl;
		cout << "5- Next" << endl;
		cout << "6- Back" << endl;
		cout << "7- Tail" << endl;
		cout << "8- Find" << endl;
		cout << "9- Get" << endl;
		cout << "10- Size/Length" << endl;
		cout << "11- Display list" << endl;
		cout << "12- Exit" << endl;
		cin >> option;
		string test;
		cout << endl << "______________________________________________________________" << endl << endl;
		switch (option)
		{
		case 1:
			cout << "Insertion" << endl;
			l.Insert();
			break;
		case 2:
			cout << "Deletion" << endl;
			l.Remove();
			break;
		case 3:
			
			cout << "Update" << endl;
			if (l.getSize() != 0)
			{
				cout << "\nEnter The Name that you want to update: ";
				cin.ignore();
				getline(cin, u);
				l.Update(u);
			}
			else
				cout << "Your List is Empty, Insert Values FIrst";
			break;
			
		case 4:
			cout << "Start" << endl;
			l.Start();
			break;
		case 5:
			cout << "Next" << endl;
			l.Next();
			break;
		case 6:
			cout << "Back" << endl;
			l.Back();
			break;
		case 7:
			cout << "Tail" << endl;
			l.Tail();
			break;
		case 8:
			
			cout << "Find" << endl;
			if (l.getSize() != 0)
			{
				cout << "Enter The Name That You Want to Find?";
				cin.ignore();
				getline(cin, k);
				l.Find(k);
			}
			else
				cout << "Your List is Empty, Insert Values FIrst";
			break;
		case 9:
			cout << " Get" << endl;
			l.Get();
			break;
		case 10:
			cout << "size" << endl;
			l.Size();
			break;
		case 11:
			cout << "display list" << endl;
			l.Display();
			break;
		case 12:
			cout << "Allah HAfiz" << endl;
			break;
		default:
			cout << " Wrong Option";
		}
	} while (option != 12);
}