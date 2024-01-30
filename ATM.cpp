#include<iostream>
#include<cstdlib>
using namespace std;
main(){
        int pin;
        int password=123;
        int count=0;
        int entry;
        double deposit=0.0;
        double balance=0.0;
        double withdraw=0.0;
        bool istrue=true;
        system("colour 4E");
        cout<<"***welcome to ATM service***\n";
        cout<<"enter your pin";
        cin>>pin;
        if(pin==password){
                            do{
            cout<<"***welcome to ATM service***\n";
            cout<<"1.deposite\n";
            cout<<"2.withdarw\n";
            cout<<"3.balance\n";
            cout<<"4.exit\n";
            cout<<"choose an option:\n";
            cin>>entry;
            switch(entry)
            {
            case 1:
              cout<<"deposit amount:\n";
              cin>>deposit;
              balance=balance+deposit;
              break;
              case 2:
              cout<<"withdraw amount:\n";
              cin>>withdraw;
              balance=balance-withdraw;
              break;
              case 3:
              cout<<"current balance :\n";
              cin>>balance;
              break;
              case 4:
              cout<<"have a nice a day!\n";
              istrue=false;
              break;
            }
        }
            while(istrue!=false)
			
            
              
              if(count==3)
			  
              istrue=false;
              else
                 cout<<"wrong pin!\n";
        }

         while(istrue!=false)
              return 0;

}
