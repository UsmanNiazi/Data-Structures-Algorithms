template <class T>

class Queue
{
	// By default private

	T *A;
	int size;
	int numofelements;
	int front, rear;
public:
	
	void Enqueue(T s);
	T Dequeue();
	bool isEmpty();
	bool isFull();
	void Display();
	T isFront();
	void Deallocate();
	void Exit();
	Queue();
	~Queue();
};
