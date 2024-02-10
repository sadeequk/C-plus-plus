#include<iostream>
#include<cctype>
using namespace std;
int main(){
	char c1='a';
	
	if(isdigit(c1)){  //isdigit computes the function is numeric character
		cout<<c1<<" is a numeric character:";
	}
	else{
		cout<<c1<<" is a non-numeric character:";
	}
	return 0;
}
