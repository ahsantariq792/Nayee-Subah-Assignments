#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main() {
	string fname, lname, fletter;
	int  percentage, favno;
	cout << "\n============BIO-DATA============\n";
	cout << "Enter Your First Name" << endl;
	cin >> fname;
	cout << "Enter Your Last Name" << endl;
	cin >> lname;
	cout << "Enter First Letter of your Name" << endl;
	cin >> fletter;
	cout << "Enter Your Percentage" << endl;
	cin >> percentage;
	cout << "Enter Your favourite Number" << endl;
	cin >> favno;

	cout << "\n***********OUTPUT***************\n";
	cout << "Your Full-Name is " << fname <<" "<< lname << endl;
	cout << "First Letter of your Name is " << fletter << endl;
	cout << "Your percentage % is " << percentage << endl;
	cout << "Your Favourite number is " << favno << endl;
	return 0;
}