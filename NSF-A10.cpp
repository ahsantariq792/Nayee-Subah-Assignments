#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int table_no;
	cout << "Enter Table Number        :"; cin >> table_no;
	for (int i = 1; i <= 10; i++) {
		cout << to_string(table_no) + " * "+to_string(i) + " = " + to_string(table_no * i) << endl;
	}
}

