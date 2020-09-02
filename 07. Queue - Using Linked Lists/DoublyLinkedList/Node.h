class Node
{
	int object;
	Node* next;
public:
	Node()
	{
		next = nullptr;
		object = 0;
	}
	void setObject(int o)
	{
		object = o;
	}
	int getObject()
	{
		return object;
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