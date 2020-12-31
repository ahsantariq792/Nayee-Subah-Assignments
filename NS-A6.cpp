#include<iostream>
using namespace std;
int main(){
	int eng, urdu, math, sci, comp;
	float total, marks, percentage;
	cout << "	*********Ahsan Tariq*********" << endl << endl;
	cout << "===============MARKSHEET================"<< endl<<endl;
	cout << "Enter Your English marks" << endl;
	cin >> eng;
	cout << "Enter Your Urdu marks" << endl;
	cin >> urdu;
	cout << "Enter Your Mathematics marks" << endl;
	cin >> math;
	cout << "Enter Your Science marks" << endl;
	cin >> sci;
	cout << "Enter Your Computer marks" << endl;
	cin >> comp;

	cout << "==============RESULT===============" << endl;
	total = 500;
	marks = eng + urdu + sci + math + comp;
	percentage = (marks / total) * 100;
	cout << "Total marks:    " << total << endl;
	cout << "Marks Obtained: " << marks << endl;
	cout << "Percentage:     " << percentage<<"%" << endl;

	return 0;

}