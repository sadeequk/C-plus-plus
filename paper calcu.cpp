//program  for counting numbers of different subjects
// by sadeeq ullah
#include<iostream>
using namespace std;
int main()
{   int english,urdu,pakstudy,physics,oop,accounting;
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
	cout<<"Enter the numbers of PHYSICS"<<endl;
	cin>>physics;
	cout<<"Enter the numbers of OOP"<<endl;
	cin>>oop;
	cout<<"Enter the numbers of ACCOUNTING"<<endl;
	cin>>accounting;
	total=english+urdu+pakstudy+physics+oop+accounting;
	avg=total/6;
    cout<<"name of the student   ="<<name<<endl;
	cout<<"Total marks "<<total<<endl;
	cout<<"average marks    ="<<avg<<endl;
}
