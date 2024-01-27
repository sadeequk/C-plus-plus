//age calculater  by sadeeq ulllah
#include<iostream>
using namespace std;
int main()
{
	int age;
	int month;
	int days;
	int hours;
	int minutes;
	cout<<"enter your age in years"<<endl;
	cin>>age;
	month=age*12;
	days= age*12*30;
	hours=age*12*30*24;
	minutes=age*12*30*24*60;
	cout<<" your age in months    =" <<month<<endl;
	cout<<"your age in days    =" <<days<<endl;
	cout<<"your age in hours    =" <<hours<<endl;
	cout<<"your age in minutes    =" <<minutes<<endl;	
}
