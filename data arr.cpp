#include<iostream>
using namespace std;
int main(){
	int data[3];
	cout<<"enter 3 elements:"<<endl;
	for(int i=0;i<3;++i){
		cin>>data[i];
	}
	cout<<"array elements are:";
	for(int i=0;i<3;++i){
		cout<<data[i]<<"";
	}
	return 0;
}
