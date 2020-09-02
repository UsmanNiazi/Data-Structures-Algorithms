#include<iostream>
#include "list.h"
#include <string>
using namespace std;
int main()
{
	list l;
	char user;
	do
	{
		system("cls");
		int num;
		cout << "\n-----------------------------Yassu Panju Game-----------------------------\n";
		cout << "\n Select Number of Players:\t";
		cin >> num;
		l.Insert(num);
		system("pause");
		system("cls");
		cout << "\n_____________________________________Player Data_________________________________\n";
		l.Display();
		system("pause");
		system("cls");
		cout << "\n_____________________________________Game Results_________________________________\n\n";
		l.Play();
		system("pause");
		cout << "\n\nDo you want to play again? y/n\n";
		cin >> user;
	} while (user != 'n');
}