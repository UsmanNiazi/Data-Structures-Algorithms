
#pragma once
class node
{
	int object;
	node* next;
	node* prev;

public:
	node() {
		object = 0;
		next = nullptr;
		prev = nullptr;
	}
	~node()
	{
	}
	void set(int x)
	{
		object = x;
	}
	int get() {
		return object;
	}
	void setnext(node* n) {
		next = n;
	}
	node* getnext() {
		return next;
	}
	void setprev(node* p) {
		prev = p;
	}
	node* getprev() {
		return prev;
	}

};