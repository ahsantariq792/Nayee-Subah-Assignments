#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main() {
	for (int i = 1; i <= 11; i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

