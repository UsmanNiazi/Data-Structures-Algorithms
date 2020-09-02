#include "list.h"
#include<string>
#include<iostream>
using namespace std;
void list::Insert()
{
	if (headnode != nullptr)
	{
		int choice1;
		cout << "\n_________________________Insert__________________________\n";
		cout << endl << "1- By location \n2- By Name \n ";
		cin >> choice1;
		if (choice1 == 1)
		{
			int c;
			cout << endl << "1- After the Current location \n2- Before the Current location\n";
			cin >> c;
			if (c == 1)
			{
				int a; string s;
				Node* newnode = new Node();
				cout << "\nEnter The Name of The Person: ";
				cin.ignore();
				getline(cin, s);
				do
				{
					cout << "\nEnter Number of Fingers Open: ";
					cin >> a;
					if (!(a >= 1 && a <= 5))
						cout << " Fingers SHould be between 1 & 5 ";
				} while (!(a >= 1 && a <= 5));
				newnode->setName(s);
				newnode->setFingers(a);
				if (currentnode->getNext() == nullptr)
				{
					currentnode->setNext(newnode);
					newnode->setPrev(currentnode);
					currentnode = newnode;
					size++;
				}
				else if (currentnode == headnode)
				{
					newnode->setNext(currentnode->getNext());
					newnode->setPrev(currentnode);
					currentnode->setNext(newnode);
					currentnode = newnode;
					size++;
				}
				else
				{
					newnode->setNext(currentnode->getNext());
					newnode->setPrev(currentnode);
					(currentnode->getNext())->setPrev(newnode);
					currentnode->setNext(newnode);
					currentnode = newnode;
					size++;
				}
			}
			else if (c == 2)
			{
				int a; string s;
				Node* newnode = new Node();
				cout << "\n Enter The Name of The Person ";
				cin.ignore();
				getline(cin, s);
				do
				{
					cout << "\nEnter Number of Fingers Open: ";
					cin >> a;
					if (!(a >= 1 && a <= 5))
						cout << " Fingers SHould be between 1 & 5 ";
				} while (!(a >= 1 && a <= 5));
				newnode->setName(s);
				newnode->setFingers(a);

			if (currentnode == headnode)
			{
				if (currentnode->getNext() == nullptr)
				{
					newnode->setNext(currentnode);
					currentnode->setPrev(newnode);
					headnode = newnode;
					currentnode = newnode;
					size++;
				}
				else
				{
					newnode->setNext(currentnode);
					currentnode->setPrev(newnode);
					headnode = newnode;
					currentnode = newnode;
					size++;
				}
			}
				else
				{

					newnode->setNext(currentnode);
					newnode->setPrev(currentnode->getPrev());
					(currentnode->getPrev())->setNext(newnode);
					currentnode->setPrev(newnode);
					currentnode = newnode;
					size++;
				}
			}
			else
				cout << "\n You Chose the Wrong Option, Try Again \n";
		}
		else if (choice1 == 2)
		{
			int choice2;
			cout << "\n1) After The Name\n2-) Before The Name\n";
			cin >> choice2;
			if (choice2 == 2)
			{

				Node* newnode = new Node();
				int chk;
				int a;
				string v,t2;
				cout << "\nEnter Name  You Want to find : ";
				cin.ignore();
				getline(cin, v);
				chk = Find(v);
				
				if (chk == 1)
				{

					string s;
					cout << "\n Enter The new  Name of The Person ";
					getline(cin, s);
					do
					{
						cout << "\nEnter Number of Fingers Open: ";
						cin >> a;
						if (!(a >= 1 && a <= 5))
							cout << " Fingers SHould be between 1 & 5 ";
					} while (!(a >= 1 && a <= 5));
					newnode->setName(s);
					newnode->setFingers(a);

					if (currentnode == headnode)
					{
						if (currentnode->getNext() == nullptr)
						{
							newnode->setNext(currentnode);
							currentnode->setPrev(newnode);
							headnode = newnode;
							currentnode = newnode;
							size++;
						}
						else
						{
							newnode->setNext(currentnode);
							currentnode->setPrev(newnode);
							headnode = newnode;
							currentnode = newnode;
							size++;
						}
					}
					else
					{
						newnode->setNext(currentnode);
						newnode->setPrev(currentnode->getPrev());
						(currentnode->getPrev())->setNext(newnode);
						currentnode->setPrev(newnode);
						currentnode = newnode;
						size++;
					}
				}
			}
			else if (choice2 == 1)
			{
				Node* newnode = new Node();
				int  chk;
				string t2;
				string v;
				cout << "\nEnter Name you want to find ";
				cin.ignore(); 
				cout << "\t";
				getline(cin, v);
				chk = Find(v);
				if (chk == 1)
				{
					int a; string s;
					Node* newnode = new Node();
					cout << "\n Enter The new  Name of The Person:\t";
					getline(cin, s);
					do
					{
						cout << "\nEnter Number of Fingers Open: ";
						cin >> a;
						if (!(a >= 1 && a <= 5))
							cout << " Fingers SHould be between 1 & 5 ";
					} while (!(a >= 1 && a <= 5));
					newnode->setName(s);
					newnode->setFingers(a);
					if (currentnode->getNext() == nullptr)
					{
						currentnode->setNext(newnode);
						newnode->setPrev(currentnode);
						currentnode = newnode;
						size++;
					}
					else if (currentnode == headnode)
					{
						newnode->setNext(currentnode);
						//newnode->setPrev(currentnode);
						currentnode->setPrev(newnode);
						currentnode = newnode;
						headnode = newnode;
						size++;
					}
					else
					{
						newnode->setNext(currentnode);
						newnode->setPrev(currentnode->getPrev());
						(currentnode->getPrev())->setNext(newnode);
						currentnode->setPrev(newnode);
						currentnode = newnode;
						size++;
					}
				}
			}
		}
	}

	else
	{
		int a; string s;
		Node* newnode = new Node();
		cout << "\n Enter The Name of The Person ";
		cin.ignore();
		getline(cin, s);
		do
		{
			cout << "\nEnter Number of Fingers Open: ";
			cin >> a;
			if (!(a >= 1 && a <= 5))
				cout << " Fingers SHould be between 1 & 5 ";
		} while (!(a >= 1 && a <= 5));
		newnode->setName(s);
		newnode->setFingers(a);
		headnode = newnode;
		currentnode = headnode;
		size++;
	}
}
bool list::Find(string x)
{
	if (size != 0)
	{
		Node *temp;
		temp = headnode;
		while (temp != nullptr)
		{
			if ((temp->getName()).compare(x) == 0)
			{
				cout << "\n" << x << " Have Opened " << temp->getFingers() <<" Fingers"<< endl;
				currentnode = temp;
				return 1;
			}
			temp = temp->getNext();
		}
		cout << endl << x << " NAME Not FOUND , Sorry \n";
		return 0;
	}
	else
		cout << "Insert Values First";
}
void list::Display()
{
	if (size != 0)
	{
		Node *temp;
		temp = headnode;
		while (temp != nullptr)
		{
			cout << "\n Name is " << temp->getName() << "\n Number of Fingers Open: " << temp->getFingers() << endl;
			temp = temp->getNext();
		}
	}
	else
		cout << "\n Please Insert Values First ";


}
void list::Start()
{
	if (size != 0)
	{
		currentnode = headnode;
		cout << "\nYou are at the first element now\n";
	}
	else
		cout << "\n Insert Values first";
}
void list::Next()
{
	if (size != 0)
	{
		if (currentnode->getNext() != nullptr)
		{
			currentnode = currentnode->getNext();
			cout << "\n You are on the next element now\n";
		}
		else
			cout << "You Are At the End of the List, You Cannot Move Forward \n";
	}
	else
		cout << " Please insert values first";

}
void list::Tail()
{
	if (size != 0)
	{
		while (currentnode->getNext() != 0)
		{
			currentnode = currentnode->getNext();
		}
		cout << "\nYou are at the end now \n";
	}
	else
		cout << endl << "Enter Values First " << endl;
}
void list::Get()
{
	if (size != 0)
	{
		cout << "\n Name is " << currentnode->getName() << "\n Number of Fingers Open: " << currentnode->getFingers() << endl;
	}
	else
		cout << "\n Insert Values FIrst ";
}
void list::Back()
{
	if (size != 0)
	{
		if (currentnode != headnode)
		{
			currentnode = currentnode->getPrev();
			cout << "\n You HAve Moved One Location Back\n";
		}
		else
		{
			cout << "You Cannot Move Back, You are at the headnode / First Location \n";;
		}
	}
	else
		cout << "\n Please Insert Values First ";
}
void list::Remove()
{
	if (size != 0)
	{
		string b;
		cout << "\nEnter The Name that you want to delete: ";
		cin.ignore();
		getline(cin, b);
		int chk = Find(b);
		Node* temp = currentnode;
		if (chk != 0)
		{
			if (currentnode == headnode)
			{
				if (currentnode->getNext() == nullptr)
				{
					currentnode = nullptr;
					headnode = nullptr;
					size = 0;
				}
				else
				{
					currentnode = currentnode->getNext();
					currentnode->setPrev(nullptr);
					headnode = currentnode;
					size--;
				}
			}
			else if (currentnode->getNext() == nullptr)
			{
				currentnode = currentnode->getPrev();
				currentnode->setNext(nullptr);
				size--;
			}
			else
			{
				(currentnode->getPrev())->setNext(currentnode->getNext());
				(currentnode->getNext())->setPrev(currentnode->getPrev());
				currentnode = currentnode->getNext();
				size--;
			}
			
			delete temp;
			cout << "\n Value Deleted Successfully";
		}
	}
	else
		cout << "Insert Values First";
}
void list::Update(string ce)
{
	if (size != 0)
	{
		int chk = Find(ce);
		if (chk != 0)
		{
			int f; string n;
			cout << "\nEnter New Name: ";
			cin.ignore();
			getline(cin, n);
			cout << "\nEnter New Number of Fingers Opened: ";
			cin >>f;
			currentnode->setFingers(f);
			currentnode->setName(n);
		}
	}
	else
		cout << "\nInsert Values First";
}
void list::Size()
{
	if (size != 0)
		cout << " Size of The Doubly Linked List is " << size;
	else
		cout << endl << " Your List is Empty " << endl;
}
int list::getSize()
{
	return size;
}
	
	