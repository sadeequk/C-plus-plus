#include<iostream>
#include<math.h>
using namespace std;


void area(int x, int y);
void area(float s);
void area(float m,float n);
int main()
{
	int ch;
	cout<<"\n  triangle area finder"<<endl;
	cout<<"\n   1. right triangle area "<<endl;
	cout<<"\n   2. equilateral triangle area "<<endl;
	cout<<"\n   3. isoceles triangle area "<<endl;
	cout<<"\n   4. exit "<<endl;
	cout<<"\n enter your choice"<<endl;
	cin>>ch;
	
	
	switch(ch)
	{
		case 1:
			int b_right,h_right;
			cout<<"\n enter  base and height"<<endl;
			cin>>b_right>>h_right;
			area(b_right,h_right);
			break;
			
		case 2:
			float side;
			cout<<"\n enter  length of side"<<endl;
			cin>>side;
			area(side);
			break;
	    case 3:
			float a,b;
			cout<<"\n enter  lenght of similar sides"<<endl;
			cin>>a;
			cout<<"\n enter  length of third side"<<endl;
			cin>>b;
			area(a,b);
			break;
		case 4:
			break;
			default:
				cout<<"invalid option"<<endl;
				
	}
return 0;
}

void area(int x, int y)
{

float result_right;
result_right=x*y/2;
cout<<"area of right angle triangle ="<<result_right;
}


void area(float s)
{

float result_equi;
result_equi=((s*s)*sqrt(3))/4;
cout<<"area of equi angle triangle ="<<result_equi;
}




void area(float m, float n)
{

float result_iso;
result_iso=(n/2)*sqrt((m*m)-((n*n)/4));
cout<<"area of iso angle triangle ="<<result_iso;
}
