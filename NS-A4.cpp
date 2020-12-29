#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main() {
	cout << "		*****Ahsan Tariq*******" << endl;
	cout << "*************Even Number Program****************" << endl;
	int number;
	cout << "Enter number to check" << endl;
	cin >> number;
	if (number % 2 == 0)
		cout << "It is an Even Number";
	else
		cout << "It is an Odd Number";

	cout << "\n===============================================================\n";
	
	cout << "*********VOWELS PROGRAM*****" << endl;
	char chk;
	cout << "Press any alphabetic key" << endl;
	cin >> chk;
	chk = tolower(chk);
	
	if (chk == 'a' || chk == 'e' || chk == 'i' || chk == 'o' || chk == 'u')
		cout << "It is vowel";
	else
		cout << "It is not a vowel";

	return 0;

}

