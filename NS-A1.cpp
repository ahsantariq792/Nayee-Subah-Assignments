#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main() {
	
	int x, y , sum , diff;
	cout << "		****AHSAN TARIQ****			";
	cout << "\n========ADDITION========\n";
	cout << "Enter First Number for Addition";
	cin >> x;
	cout << "Enter Second Number for Addition";
	cin >> y;
	sum = x + y;
	cout << "The Addition is " << sum;

	cout << "\n========SUBTRACTION========\n";
	cout << "Enter First Number for Subtraction";
	cin >> x;
	cout << "Enter Second Number for Subtraction";
	cin >> y;
	diff = x - y;
	cout << "The Subtraction is " << diff;
	return 0;

}