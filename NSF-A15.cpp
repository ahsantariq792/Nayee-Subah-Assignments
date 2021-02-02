#include<iostream>
#include<conio.h>
using namespace std;
int num1, num2, result;
char opt;

void Add()
{
	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter second number: " << endl;
	cin >> num2;
	result = num1 + num2;
	cout << "Result of Addition is : " << result << endl;
}
void Subtract()
{
	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter second number: " << endl;
	cin >> num2;
	result = num1 - num2;
	cout << "Result of Subtraction is : " << result << endl;
}
void Multiply()
{
	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter second number: " << endl;
	cin >> num2;
	result = num1 * num2;
	cout << "Result of Multiplication is : " << result << endl;
}
void Divide()
{
	cout << "Enter first number: " << endl;
	cin >> num1;
	cout << "Enter second number: " << endl;
	cin >> num2;
	result = num1 / num2;
	cout << "Result of Division is : " << result << endl;
}

int main()
{
	cout << "Select anyone option"<<endl<<endl;
	cout << "Press A for Addition" << endl;
	cout << "Press S for Subtraction" << endl;
	cout << "Press M for Multiplication" << endl;
	cout << "Press D for Division" << endl;
	cin >> opt;
	if (opt == 'A') {
		Add();
	}
	else if (opt == 'S') {
		Subtract();
	}
	else if (opt == 'M') {
		Multiply();
	}
	else if (opt == 'D') {
		Divide();
	}

	return 0;
	

}
