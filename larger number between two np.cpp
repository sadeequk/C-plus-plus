#include<iostream>
using namespace std;
int main(){
	int first,second;
	cout<<"enter two numbers";
	cin>>first>>second;
	
	if(first>second){
		cout<<first<<"is greater then "<<second;
	}
	else if(second>first){
		cout<<second<<"is greater then "<<first;
	}
	else{
		cout<<first<<"are equal to"<<second;
	}
	return 0;
}
