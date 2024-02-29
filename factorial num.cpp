#include<iostream>
using namespace std;
int factorial(int n){
	if (n<=1)
	return 1;
	return n = n*factorial(n-1);
}
int main(){
	int number,result;
	cout<<"enter your number"<<endl;
	cin>>number;
	
	result=factorial(number);
	cout<<"!="<<result;
}
