#include<iostream>
using namespace std;
int main()
{
	int r,c;
	cout<<"Enter rows  : ";
	cin>>r;
	cout<<"Enter colums : ";
	cin>>c;
	int arr[r][c];
	for(int i=0;i<r;i++)
	{  
	    cout<<"Enter Row "<<i+1<<" : ";
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}	
	}
	cout<<endl;
	
	for(int i=0;i<r;i++)
	{  
	    
		for(int j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;	
	}
	
	
}
