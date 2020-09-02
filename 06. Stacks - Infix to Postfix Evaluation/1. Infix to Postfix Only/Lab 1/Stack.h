template <class T>

class Stack
{
	// By default private

	T *A;
	int top;
public:
	
	void Push(T s);
	T Pop();
	T TOS();
	bool isEmpty();
	bool isFull();
	void Deallocate();
	void Exit();
	bool Prec(char a, char b);
	Stack();
	~Stack();
};
