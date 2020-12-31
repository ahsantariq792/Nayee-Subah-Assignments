#include<iostream>
using namespace std;

int main() 
{

	char opt;
	cout << "============= Welcome to Homepage ===============\n";
	cout << "Press 0 for exit\n";
	cin >> opt;
	if (opt == '0') {
		exit(0);
	}
	else {
		system("start registrationform.exe");
	}
	return 0;
}


