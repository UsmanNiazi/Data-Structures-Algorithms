#include "graph.h"
#include<iostream>
using namespace std;
void graph::construct(int vertices)
{

	matrix = new int* [vertices];
	for (int i = 0; i < vertices; i++)
		matrix[i] = new int[vertices];
}

void graph::fill(int vertices)
{
	char choice,start = 'A',temp = 'A', c;

	for (int i = 0; i < vertices; i++)
	{
		cout << "Does Node [" << start << "] have any edges? y/n ";
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
		{
			temp = 'A';
			for (int j = 0; j < vertices; j++)
			{
				if (temp != start)
				{	
					while (1)
					{
						cout << "\n--Does it have any edge with [" << temp << "] y/n? ";
						cin >> c;
						if (c == 'y' || c == 'Y')
						{
							cout << "\nEnter Weight: ";
							cin >> matrix[i][j];
						}
						else if (c == 'n' || c == 'N')
							matrix[i][j] = 999;
						else
						{
							cout << "\nIncorrect Selection. Try Again. \n\n";
							continue;
						}
						break;
					}
					temp++;
				}
				else
				{
					matrix[i][j] = 0;
					temp = temp + 1;
				}
			}
		}
		else
		{
			for (int j = 0; j < vertices; j++)
			{
				matrix[i][j] = 999;
			}
		}
		start++;
	}
}
void graph::display(int v)
{
	cout << "\n---------------------------------------------\n\n";
	for (int i = 0; i < v; i++)
	{
		for (int j = 0; j < v; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n---------------------------------------------\n";
}