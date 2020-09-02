#include<iostream>
#include<string>
#include<ctype.h>
#include<stdio.h>
#include "function.cpp"
using namespace std;
int character(char a)
{
	if (a == '+' || a == '^' || a == '*' || a == '/' || a == '*' || a == '-')
		return 1;
	else
		return 0;
}
int toint(char a)
{
	return a - '0';
}
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
			postfix += op;
		}

		cout << "Postfix is " << postfix << endl;
	//cin >> op;
	Stack<float> intstack;
	int e, op1, op2, v;
	string value;
	value = postfix;
	int i = 0;
	while (value[i])
	{
		if (!character(value[i]))
		{
			intstack.Push(toint(value[i]));
		}
		else
		{
			op2 = intstack.Pop();
			op1 = intstack.Pop();
			if (value[i] == '+')
			{
				intstack.Push(op1 + op2);
			}
			else if (value[i] == '-')
				intstack.Push(op1 - op2);
			else if (value[i] == '*')
				intstack.Push(op1 * op2);
			else if (value[i] == '/')
				intstack.Push(op1 / op2);
			else if (value[i] == '^')
				intstack.Push(pow(op1, op2));
		}
		i++;
	}
	cout << "finalresult: " << intstack.Pop() << endl;

}
