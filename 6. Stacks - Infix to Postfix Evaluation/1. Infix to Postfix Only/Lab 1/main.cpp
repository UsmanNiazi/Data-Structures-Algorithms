#include<iostream>
#include<string>
#include<ctype.h>
#include<stdio.h>
#include "function.cpp"
using namespace std;
int main()
{
	//Stack<int> intstack;
	Stack<char> charstack;
	int n, f;
	char s, op, c;
	string infix, postfix = "";

	cout << "\nEnter An Expression: ";
	getline(cin, infix);

	for (int i = 0; i < infix.length(); i++)
	{

		if (isdigit(infix[i]))
		{
			postfix += infix[i];
		}
		else
		{
			while (!(charstack.isEmpty()) && charstack.Prec(charstack.TOS(), infix[i]))
			{

				op = charstack.Pop();
				postfix += op;
			}

			if (charstack.isEmpty() || infix[i] != ')')
			{
				charstack.Push(infix[i]);
			}
			else
				charstack.Pop();
		}
	}
		while (!charstack.isEmpty())
		{
			op = charstack.Pop();
			cout << endl << op << endl;

			postfix += op;
		}

	cout << "Postfix is " << postfix;
	cin >> op;
}
