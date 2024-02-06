#include<iostream>
using namespace std;
int main(){
	char first{};
	char second{};
	std::cout<<"enter your first character:";
	std::cin>>first;
		std::cout<<"enter your second character:";
	std::cin>>second;
	std::cout<<"the value of the expression:"<<first<<'<'<<second<<"is:"<<(first<second)<<std::endl;
	std::cout<<"the value of the expression"<<first<<"=="<<second<<"is:"<<(first==second)<<std::endl;
	return 0;
}
