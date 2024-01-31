#include<iostream>
#include<iomanip>
int main(){
	int unit_price{295};
	int count{};
	int discount_threshold{25};
	double discount{0.07};
	
	int*pcount{&count};
	std::cout<<"enter the number of items you want:";
	std::cin>>*pcount;
	std::cout<<"the unit price is:"<<std::fixed<<std::setprecision(2)<<"$"<<unit_price/100.0<<std::endl;
	
	int*punit_price{&unit_price};
	int price{*pcount**punit_price};
	auto*pprice{&price};
	
	double net_price{};
	double*pnet_price{};
	pnet_price=&net_price;
	
	if(*pcount>discount_threshold)
	{
		std::cout<<"you qualify for a discount of:"<<"static_cast<int>(discount*100.0)"<<"percent \n";
		*pnet_price=price*(1.0-discount)/100.0;
	}
	else{
		net_price=*pprice/100.0;
	}
	std::cout<<"the net price for"<<" *pcount "<< "and" <<" items is $"<<net_price<<std::endl;
	
	return 0;
}
