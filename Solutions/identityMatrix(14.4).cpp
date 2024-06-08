#include<iostream>
using namespace std;
int main()
{
	int r=3,c=3;
	bool ind=true;
	int arr[r][c];
	cout<<"Enter 3x3 Matrix  \n\n";
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
		    if(arr[i][i]!=1)
		    {
		      	ind=false;
			}
	}
	
	if(ind)
	{
		cout<<"\nYes it is identity Matrix";
	}
	else
	{
		cout<<"\nNo its not identity Matrix";
	}
	
	
}
