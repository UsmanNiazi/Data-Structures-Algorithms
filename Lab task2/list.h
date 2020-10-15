#pragma once
#pragma once
#include"node.h"
class list {
private:
	int size;
	node* currentnode;
	node* headnode;
	

public:
	list() {
		size = 0;
		currentnode = nullptr;
		headnode = nullptr;
	
	}
	~list() {

	}


	void insertion();
	void deletion();
	int  find();
	void exit();
	void next();
	void back();
	void tail();
	void display();
	void start();
	void length();
	void get();
	void update();

};
