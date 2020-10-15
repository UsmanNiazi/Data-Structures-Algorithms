#include <iostream>
#include"List.h"
using namespace std;

void list::insertion()
{
	node* newnode;
	int num;
	newnode = new node();
	cout << "please enter the value you want to insert....." << endl;
	cin >> num;
	newnode->set(num);
	newnode->setnext(nullptr);
	newnode->setprev(nullptr);

	cout << "Enter the choice how you want to insert the value?" << endl;
	cout << " if you want to insert after location press 1\n And if you want to insert value before location press 2" << endl;
	int ch;
	cin >> ch;
	switch (ch)
	{
	case 1:
		if (headnode == nullptr) {
			headnode = newnode;
			currentnode = newnode;
		}
		else {
			newnode->setprev(currentnode);
			newnode->setnext(currentnode->getnext());
			(currentnode->getnext())->setprev(newnode);
			currentnode->setnext(newnode);
			currentnode = newnode;
		}
		size++;
		break;
	case 2:
		if (headnode == nullptr) {
			headnode = newnode;
			currentnode = newnode;
		}
		else if (currentnode!=headnode) {
			
			newnode->setprev(currentnode->getprev());
		newnode->setnext(currentnode);
		(currentnode->getprev())->setnext(newnode);
		currentnode->setprev(newnode);
		currentnode = newnode;
		}
		else {
        currentnode->setprev(newnode);
			newnode->setnext(currentnode);
			newnode->setprev(nullptr);
			newnode = headnode;
			newnode = currentnode;
		}
		
		
		
		
		size++;
		break;
	default:
		cout << "please enter the correct choice" << endl;
		break;


	}
}
void list::deletion()
{
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	}
	else {
		if (find() == 1) {
			node* temp = currentnode;
			(currentnode->getprev())->setnext(currentnode->getnext());
			(currentnode->getnext())->setprev(currentnode->getprev());
			currentnode = currentnode->getnext();
			delete temp;
		}
		else {
			cout << "value not found" << endl;

		}
	}
}
void list::get()
{
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	}
	else {
		cout << "Current element is " << currentnode->get() << endl << "Current index is " << currentnode->getnext() << endl;
	}
}
void list::start()
{
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	}
	else {
	currentnode = headnode;
	cout << "Current element is " << currentnode->get() << endl << "Current index is " << currentnode->getnext() << endl;
	}
}
	


void list::update()
{
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	}
	else {
		if (find() == 1)
		{   
			int update;
			cout << "Enter the value to be updated......!!!!!!" << endl;
			cin >> update;
			
			currentnode->set(update);
		}
		cout << "your value has been updated thanks!!!!!!" << endl;
	}
}
void list::tail()
{
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	}
	else {
		while (currentnode->getnext() != nullptr) {
			currentnode = currentnode->getnext();

		}
		cout << "you are now at the end" << endl;
	}
}
void list::back()
{
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	} 
	else {
		currentnode = currentnode->getprev();
		cout << "you are now on this " << currentnode->get() << " element" << endl;
	}
	}
void list::next()
{	
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	}
	else {
		currentnode = currentnode->getnext();
		cout << "you are now on this " << currentnode->get() << " element" << endl;
	}
	}
void list::display()
{
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	}
	else {
		node* tem = headnode;
		while (tem != nullptr)
		{
			cout << tem->get() << endl;
			tem = tem->getnext();
		}
	}
}
void list::length()
{
	if (headnode == nullptr) {
		cout << "List is empty" << endl;
	}
	else {
		cout << "length of list is:" << size << endl;
	}
	}
void list::exit()
{

}
int list::find()
{
	int flag = 0;
	if (headnode == nullptr) {

		cout << "List is empty" << endl;

	}
	else {

		int num;
		cout << "Enter the value that you want to find" << endl;
		cin >> num;
		node* temp = headnode;

		while (temp != nullptr)
		{
			if (num == temp->get())
			{
				currentnode = temp;

				flag = 1;
				break;

			}
			else
			{
				flag = 0;
			}
		}
	}
	return flag;
}