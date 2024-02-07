#include<iostream>
using namespace std;
int main(){
	  char option;
	  cout<<"enter your option:";
	  cin>>option;
	  int withdraw;
	  cout<<"enter your withdraw amount:";
	  cin>>withdraw;
	  
	  switch(withdraw){
	  	case'1':
	  		cout<<"withdraw amount is 500:";
	  		break;
	  		case'2':
	  		cout<<"withdraw amount is 1000:";
	  		break;
	  		case'3':
	  		cout<<"withdraw amount is 1500:";
	  		break;
	  		default:
	  			cout<<"invalid withdraw amount:";
	  }
	  return 0;
}
