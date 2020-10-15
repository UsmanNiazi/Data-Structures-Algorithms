#include<iostream>
#include<stdio.h>
#include"list.h"
using namespace std;
int main() {
	int op;
	list L;
	do {

		cout << "		--------- Please enter choice between 1 to 12 For Different Operations----------- " << endl;

		cout << "					For insertion please press 1              " << endl;
		cout << "					For Deletion please press 2               " << endl;
		cout << "					For Update(replace the element) please press 3    " << endl;
		cout << "					For Start please press 4" << endl;
		cout << "					For Next please press 5" << endl;
		cout << "					For Back please press 6" << endl;
		cout << "					For Tail please press 7" << endl;
		cout << "					For Find please press 8" << endl;
		cout << "					For length please press 9" << endl;
		cout << "					For Get(display current index and element) please press 10" << endl;
		cout << "					For Display list please press 11" << endl;
		cout << "					For Exit please press 12" << endl;
		cin >> op;
		switch (op) {
		case 1:
			L.insertion();

			break;
		case 2:


			L.deletion();
			break;
		case 3:

			L.update();
			break;
		case 4:

			L.start();
			break;
		case 5:

			L.next();
			break;
		case 6:

			L.back();
			break;
		case 7:

			L.tail();
			break;
		case 8:

			if (L.find() == 1)
			{
				cout << "value is found" << endl;

			}
			else {
				cout << "value is not found try again" << endl;
			}
			break;

		case 9:

			L.length();
			break;
		case 10:

			L.get();
			break;

		case 11:

			L.display();
			break;
		case 12:

			L.exit();
			break;



		}
	} while (op != 12);
	return 0;
}