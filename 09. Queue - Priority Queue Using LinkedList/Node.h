class Node
{
	int object;
	int prior;
	Node* next;
public:
	Node()
	{
		next = nullptr;
		object = 0;
		prior = 0;
	}
	void setObject(int o)
	{
		object = o;
	}
	int getObject()
	{
		return object;
	}
	void setPrior(int o)
	{
		prior = o;
	}
	int getPrior()
	{
		return prior;
	}
	void setNext(Node* n)
	{
		next = n;
	}
	Node* getNext()
	{
		return next;
	}
};