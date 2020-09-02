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
		size = 0;
	}
	int size;
	void Enqueue(int a,int p);
	int Dequeue();
	int Front();
	int Rear();
	bool isEmpty();
	void Display();
	void Exit();
	int Find(int v);
	int Size();
	~Queue()
	{
		delete front, rear;
	}
};