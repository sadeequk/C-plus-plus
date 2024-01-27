#include<iostream>
using namespace std;
main(){
        int a;
        cout<<"enter the value"<<endl;
        cin>>a;
        int b;
        cout<<"enter the value"<<endl;
        cin>>b;
         int c;
        cout<<"enter the value"<<endl;
        cin>>c;
        if(a>b){
        cout<<"A is greater than B"<<endl;
        }
        else if(a>c){
        cout<<"A is greater than C"<<endl;
        }
        else if(b>c){
        cout<<"B is greater than C"<<endl;
        }
        else{
        	cout<<"A,B and C are equal:"<<endl;
		}
        return 0;
}
