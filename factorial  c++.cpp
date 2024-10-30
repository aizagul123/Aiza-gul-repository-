
#include<iostream>
using namespace std;
int main()
{
int n;
	 long factorial =1;
	  cout<<"enter a positive number:";
	  cin>>n;
	  if(n<0)
	  cout<<"error! factorial  of anegative number does  not exist";
	  
	  
	  else{
	  	for(int i=1;i<=n;i++)
		  factorial*=i
	} cout<<"factorial of"<<n<<"="<<factorial;
		  }
		  return 0;