#include<iostream>
using namespace std;
int main()
{
	int english,urdu,pakstudy;
	char name [30];
	int total;
	int avg;
	cout<<"Enter the name of the student"<<endl;
	cin>>name;
	cout<<"Enter the numbers of ENGLISH"<<endl;
	cin>>english;
	cout<<"Enter the numbers of URDU"<<endl;
	cin>>urdu;
	cout<<"Enter the numbers of PAKSTUDY"<<endl;
	cin>>pakstudy;	
	total=english+urdu+pakstudy;
	avg=total/3;
	cout<<"name of the student   ="<<name<<endl;
	cout<<"Total marks of "<<total<<endl;
	cout<<"average marks    ="<<avg<<endl;
}
