#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string arr[10];
	int i;
	cout<<"Enter array elements: \n";
	for (i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	cout << "\nThe array elements are: \n";
	cout<<"[";
	for (i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	cout<<"]";

}
