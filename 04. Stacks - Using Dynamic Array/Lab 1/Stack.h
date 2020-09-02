#pragma once
class Stack
{
	// By default private

	char *A;
	int max;
	int top;
public:
	void CreateList();
	void Push();
	char Pop();
	char TOS();
	bool isEmpty();
	bool isFull();
	void Display();
	void Deallocate();
	void Exit();
	
/* made by usman khan 


void null;

*/
	Stack()
	{
		A = nullptr;
		max = 0;
		top = -1;
	}
	~Stack()
	{
		
	}

};
