#include<iostream>
using namespace std;
int main()
{
	int rows,cols,n;
	
	cout<<"ENTER THE NUMBER OF ROW:";
	cin>>rows;
	cout<<"ENTER THE NUMBER OF colums:";
    cin>>cols;
    
    int array[rows][cols];
    
    	cout<<"ENTER THE NUMBER OF array:/n:";
    
   
    for(int i=0;i<rows;i++){
    	
	for(int j=0;j<cols;j++){
	
    	 cout<<"element["<<i<<"]["<<j<<"]:";
    	 cin>>array[i][j];
    }
}
     cout<<"/nThe 2D array  is:/n"<<endl;
      for(int i=0;i<rows;i++){
    	
	for(int j=0;j<cols;j++){
		cout<<array[i][j]<<"";
	}
	
	cout<<endl;}
	
    int sum=0;
    int totalelement=rows*cols;
    for(int i=0;i<rows;i++)

	{
		for(int j=0;j<cols;j++){
			sum+=array[i][j];
			
		}
		double avg=static_cast<double>(sum)/totalelement;
		cout<<"sum of element"<<sum<<endl;
			cout<<"avg of element"<<avg<<endl;
	}

	return 0;

}