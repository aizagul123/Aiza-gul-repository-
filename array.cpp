#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,3,5,6,7};
	float div;
	
	cout<<"element of the array are:";
	
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"";
		div=div/arr[i];
	}
	
	cout<<endl;
	cout<<"div"<<div<<endl;
	
	return 0;
}