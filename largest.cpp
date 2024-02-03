#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,4,6,8,10};
	int largest=arr[0]
	
	for( i=1;i<5;++i){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	cout<<"largest element="<<largest;
	return 0;
		
	
}
