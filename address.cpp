#include<iostream>
using namespace std;
int main(){
	int*pc,c;
	c=5;
	pc=&c;
	cout<<"value of pc="<<pc<<endl;
	cout<<"address of c="<<&c;
	return 0;
}
