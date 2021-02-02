#include <iostream>
using namespace std;

struct info
{
    char name[50];
    int roll;
    int age;
    char city[20];
} s[10];

int main()
{
    cout << "==========Enter information========" << endl;

    for(int i = 0; i < 3; ++i)
    {
        s[i].roll = i+1;
        cout << "Enter Roll No"; 
		cin >> s[i].roll;

        cout << "Enter name: ";
        cin >> s[i].name;
        
        cout << "Enter city: ";
        cin >> s[i].city;

        cout << "Enter age: ";
        cin >> s[i].age;
        

        cout << endl;
        cout<<"Name    :"<<s[i].name<<endl;
    	cout<<"Rollno  :"<<s[i].roll<<endl;
    	cout<<"Age     :"<<s[i].age<<endl;
    	cout<<"City    :"<<s[i].city<<endl;
    	cout<< endl;
	}
    
    
}
