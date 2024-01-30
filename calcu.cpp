#include<iostream>
using namespace std;
int main(){
	int a=10,b=20;
	char op;
	cout<<"enter your operators:+,-,*,/";
	cin>>op;
	switch(op){
		case'+':
			cout<<"+"<<"result"<<(a+b);
			break;
			case'-':
			cout<<"-"<<"result"<<(a-b);
			break;
			case'*':
			cout<<"*"<<"result"<<(a*b);
			break;
			case'/':
			cout<<"/"<<"result"<<(a/b);
			break;
			default:
				cout<<"invalid operator";
				return 0;
	}
}
