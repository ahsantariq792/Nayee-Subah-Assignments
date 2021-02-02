#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	cout << "=====Select Anyone Option===============" << endl; cout << endl;
	cout << "===== Press 1 For Two Lives ============" <<  endl;
	cout << "===== Press 2 For Infinite Lives =======" << endl; cout << endl;
	int no;
	cin >> no;
	string name;
	if (no == 1) {
		for (int i = 0; i <= 1; i++) {
			cout << "Enter name for matching : "; cin >> name;
			if (name == "nsf") {
				cout << "Congratulations!!! You Won The Match";
				break;
			}
			else {
				cout << "Try Again"; cout << endl; cout << endl;
			}
		}
	}
	else if (no == 2) {
		while (name != "nsf") {
			cout << "Enter name for matching : "; cin >> name;
			if (name == "nsf") {
				cout << "Congratulations!!! You Won The Match";
				break;
			}
			cout << "Try Again"; cout << endl; cout << endl;
		}
	}

}

