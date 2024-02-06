// temprature  converter by sadeeq ullah khan
//relation c=5/9(f-32)
#include<iostream>
using namespace std;
int main()
{
	float c,f,a;
	cout<<"enter temprature in farehite to converte it into centigrate"<<endl;
	cin>>f;
	a=f-32;
	c=0.56*a;
	cout<<"your temprature in centegrate is "<<c<<endl;
}
