#include "Node.h"
#include<iostream>
using namespace std;
class Queue
{
	Node* front;
	Node* rear;
public:
	Queue()
	{
		rear = nullptr;
		front = nullptr;
	}
	void Enqueue(int a);
	int Dequeue();
	int Front();
	int Rear();
	bool isEmpty();
	~Queue()
	{
		delete front, rear;
	}
};