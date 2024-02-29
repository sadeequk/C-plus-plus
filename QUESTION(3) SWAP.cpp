#include<iostream>

using namespace std;

int fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
int main()
{
	int num;
	
	cout<<"enter any number";
	cin>>num;
	
	cout<<"Factorial of Number :"<<fact(num);
	return 0;
	
}

