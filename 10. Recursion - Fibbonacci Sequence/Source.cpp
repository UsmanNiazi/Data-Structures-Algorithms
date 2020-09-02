#include<iostream>
#include<conio.h>
using namespace std;
int fibbo(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
	{
		return fibbo(n - 2) + fibbo(n - 1);
	}
 }


int main()
{
	int n;
	char choice = 'n';
	while (1)
	{
		cout << "\n\n\nEnter a number to find its Fibbonacci Sequence: ";
		cin >> n;
		cout << "\nFibbonacci of " << n << " is ";
		cout<< fibbo(n);
		cout << endl << "Do you want to exit? y/n" << endl;
		cin >> choice;
		if (choice == 'y' || choice == 'Y')
			exit(1);
	}
}