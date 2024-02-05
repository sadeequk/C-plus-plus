#include<iostream>
using namespace std;
int main(){
	//cout<<"welcome to cpp language:"<<endl;
	float num1,num2;
	cout<<"enter your first number:";
	cin>>num1;
	cout<<"enter your second number:";
	cin>>num2;
	char op;
	cout<<"enter your option you want:";
	cin>>op;
	  if(op=='+'){
	  	cout<<"addition is :"<<num1+num2;
	  }
	  else if(op=='-'){
	  	cout<<"subtraction is :"<<num1-num2;
}
	   else if(op=='*'){
	  	cout<<"multiplication is :"<<num1*num2;
	  }
	  	 else if(op=='/'){
	  	cout<<"division is :"<<num1/num2;
}
else{
cout<<"choose correct option:";
}


}
