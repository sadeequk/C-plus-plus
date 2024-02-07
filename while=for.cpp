#include<iostream>
using namespace std;
int total;
int current;
int counter;

main(){
	total=0;
	counter=0;
	while(counter<5){      // for(counter=0;counter<5;++counter)
	
	                      //  same program for(for) loop as well
	cout<<"number!";
	cin>>current;
	total+=current;
	++counter;
}
cout<<"the grand total is:"<<total<<endl;
return 0;
}
