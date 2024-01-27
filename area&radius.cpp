#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	const double pi{3.1415926553589793233846};
	const size_t perline{3};
	size_t linecount{};
	
	for(double radius {0.2};radius<=0.3;radius+=0.2)
	{
		std::cout<<std::fixed<<std::setprecision(2)<<"radius="<<std::setw(5)<<radius<<"area="<<std::setw(6)<<pi*radius*radius;
		
		if(perline==++linecount)
		{
			std::cout<<std::endl;
			linecount=0;
		}
	}
	std::cout<<std::endl;
	return 0;
}
