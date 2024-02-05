////////// Write Down C++ Programme Task ///////////////
// 1) My Name Is _______
// 2) Registration No is ________
// 3) I a Currently enrolled in 1st semester MECHANICAL ENGINEERING DEPARTMENT///
// This is My first prrogramme


/////////////// Programme ///////////////////
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	char fname[20],lname[20];
	int regNo;
	///// Input Of FIRST NAME /////
	cout<<"Enter Your First_Name : "<<endl;
	cin>>fname;
	/////// Iput OF NAME ///////
	cout<<"Enter Your Last_Name"<<endl;
	cin>>lname;
	////// IPUNT OF REG NO /////////
	cout<<"Enter Your Registration No: "<<endl<<endl;
	cin>>regNo;
	
	cout<<"My name Is: "<<fname<<" "<<lname<<endl<<"Registration No Is: "<<regNo<<endl<<endl;
	cout<<" I am Currently enrolled in 1st semester MECHANICAL ENGINEERING DEPARTMENT"<<endl;
	cout<<"This is My first prrogramme"<<endl;
	getch();
	return 0;
	
	
}

