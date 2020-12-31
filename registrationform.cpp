#include<iostream>
using namespace std;

main(){
	cout<<"============ Registration Form:  Ahsan Tariq===============\n\n";
	cout<<"Enter Your First Name\n";
	string first;
	cin>>first;
	
	cout<<"\nEnter Your Last Name\n";
	string last;
	cin>>last;
		
	cout<<"\nEnter the Email Address\n";
	string email;
	cin>>email;
		
		
	cout<<"\nEnter the Password\n";
	string pass;
	cin>>pass;
		
	cout<<"\nConfirm Password\n";
	string cpass;
	cin>>cpass;
		
	if(pass==cpass)
	{

		cout<<"=============Welcome to Login page============\n\n";
		cout<<"Enter the Email for login: ";
		string y_email;
		cin>>y_email;
			
		cout<<"Enter the Password for login: ";
		string y_pass;
		cin>>y_pass;
			
		if(email==y_email && pass==y_pass){
			cout<<"\nlogin Successfully";		
			system("start NS-A5-Login and reg.exe");
		}
		else{
			cout<<"Invalide Username OR Password";
		}
	}
	else{
		cout<<"Password not matched";
	}	
}
