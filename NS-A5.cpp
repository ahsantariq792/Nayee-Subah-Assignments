#include <iostream>
using namespace std;
int main() {

	cout << "=============Welcome to ATM MACHINE============="<<endl;
	cout << "Enter the PIN CODE to proceed\n";
	int pin;
	cin >> pin;

	if (pin == 4321) {
		cout << "Select the Options\n";
		cout << "\n Press 1 for Balance Inquiry\n";
		cout << "\n Press 2 for Cash Withdraw\n";
		cout << "\n Press 3 for Bill Payment\n";

		int select;
		cin >> select;

		if (select == 1) {
			cout << "Balance: 50,000/- PKR\n";
		}
		else if (select == 2){
			cout << "Withdrawing Cash.........\n";
		}
		else {
			cout << "Payment of Bills\n";
		}

	}
	else {
		cout << "Invalid PIN CODE";
	}
	return 0;
}
