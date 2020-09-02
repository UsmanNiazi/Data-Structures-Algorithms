#include<iostream>
#include "graph.h"
using namespace std;
int main()
{
	int choice,flagc = 0,vertices = 0,flagf = 0;
	graph plane = graph();
	while (1)
	{
		cout << "\n\n\n----------------Graphs-----------------\n";
		cout << "1- Construct Graph\n2- Fill Graph\n3- Display Graph\n4- Exit\n";
		cin >> choice;
		if (choice == 1)
		{
			if (flagc == 0)
			{
				cout << "How Many Vertices do you want to enter: ";
				cin >> vertices;
				plane.construct(vertices);
				cout << "\nConstruction of graph with " << vertices << " x " << vertices << " size was successful";
				flagc = 1;
			}
			else
				cout << "You Have already Contructed a Graph. Please Fill the values. \n";
		}
		else if (choice == 2)
		{
			if (flagc != 0)
			{
				
				plane.fill(vertices);
				flagf = 1;
			}
			else
				cout << "\n Please construct the graph first\n";
		}
		else if (choice == 3)
		{
			if (flagc != 0)
			{
				if (flagf != 0)
				{
					cout << "\n\n\n";
					plane.display(vertices);
				}
				else
					cout << "\n Please fill the graph first\n";
			}
			else
				cout << "\n Please construct the graph first\n";
		}
		else if (choice == 4)
		{
			cout << "\nThank You, Allah Hafiz\n";
			break;
		}
		else
			cout << "\nWrong Option, Select Again\n";
	}
}