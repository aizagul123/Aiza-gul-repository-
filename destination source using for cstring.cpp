#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char source[]="Hello ,world!";
	char destination[50];      //make sure the destination array
	
	
	//use strcpy() to copy the source string into destination
	strcpy(destination,source);
	
   //	print the copy string
	cout<<"source string:"<<source <<endl;
	cout<<"Destination string:"<<destination <<endl;
	
	return 0;
	
	
	
	
	
}




