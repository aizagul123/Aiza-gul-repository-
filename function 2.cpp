#include<iostream>
using namespace std;
int passbyvalue(int num)
{
	num=num+10;
	cout<<"inside functoin( passbyvalue):"<<num<<endl;
}


void passmultivalue (int num){
	num=num*10;
	cout<<"inside functoin( passmultivalue):"<<num<<endl;}
	
	void passsubvalue (int num){
		num=num-10;
		cout<<"inside function(passsubvalue):"<<num<<endl;
	}
int main(){
	
	int number=5;
	cout<<"before function call:"<<number<<endl;
	passbyvalue(number);
	cout<<"after function call:"<<number<<endl;
	passmultivalue(number);
	passsubvalue(number);
	return 0;
	
}