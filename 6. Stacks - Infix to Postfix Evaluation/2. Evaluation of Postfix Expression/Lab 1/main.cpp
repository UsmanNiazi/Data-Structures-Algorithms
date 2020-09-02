#include<iostream>
#include "function.cpp"
#include<ctype.h>
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
	Stack<float> intstack; 
	int e,op1,op2,v;
	string value;
	cout << "Enter A Expression: ";
	cin >> value;
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
	cout << "finalresult: " << intstack.Pop();
}