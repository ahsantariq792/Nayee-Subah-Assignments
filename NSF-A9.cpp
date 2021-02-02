#include <iostream>
#include <conio.h>
#include <string>
#include <string.h>
using namespace std;

int main() {
	int table_no;
	int starting_no;
	int ending_no;
	cout << "Enter Table Number        :"; cin >> table_no;
	cout << "Enter Table Start Number  :"; cin >> starting_no;
	cout << "Enter Table Ending Number :"; cin >> ending_no;
	for (int i = starting_no; i <= ending_no; i++) {
		cout << to_string(table_no) + " * "+ to_string(i) + " = "+to_string( table_no * i) << endl;
	}
}

