#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int rows;
	cout << "Enter Number Of Rows :"; cin >> rows;
	for (int i = 1; i <= rows; i++) {
		for ( int j=1 ; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
}

