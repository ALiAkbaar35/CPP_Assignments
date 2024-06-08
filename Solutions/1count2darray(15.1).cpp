#include<iostream>
using namespace std;
int main()
{    
//    Given a Boolean 2D array of n x m dimensions where each row is sorted.
//    Find the 0-based index of the first row that has the maximum number of 1's.
	int count=0,row=0;
	int tempcount=0;
	int r,c;
	cout<<"Enter rows  : ";
	cin>>r;
	cout<<"Enter colums : ";
	cin>>c;
    int arr[r][c];

	cout<<"\n\nEnter "<<r<<" x "<<c<<" Matrix  \n\n";
	for(int i=0;i<r;i++)
	{  
	    cout<<"Enter Row "<<i+1<<" : ";
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}	
	
	}
	for(int i=0;i<r;i++)
	{  	
		
		tempcount=0;
		for(int j=0;j<c;j++)
		{
			if(arr[i][j]==1)
			{
				tempcount++;	
			}
		}
		
		if(count<tempcount)
		{	
			count=tempcount;	
			row=i+1;
		}	
	}
	
	cout<<"Row "<<row<<" maximum 1 which is "<<count;
}
