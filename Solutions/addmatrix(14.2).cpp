#include<iostream>
using namespace std;
int main()
{
	int r=3,c=3;
	int arr[r][c],arr2[r][c],add[r][c];

	cout<<"Enter Matrix 1 \n\n";
	for(int i=0;i<r;i++)
	{  
	    cout<<"Enter Row "<<i+1<<" : ";
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}	
	
	}
	    
		cout<<"\n\nEnter Matrix 2 \n\n";
	    
	   for(int i=0;i<r;i++)
	{  
	    cout<<"Enter Row "<<i+1<<" : ";
		for(int j=0;j<c;j++)
		{
			cin>>arr2[i][j];
		}	
	}
	
	cout<<endl<<endl<<"Sum of Both Matrix are \n\n";
	
	for(int i=0;i<r;i++)
	{  
	    
		for(int j=0;j<c;j++)
		{ 	
		    add[i][j]=arr[i][j]+arr2[i][j];
			cout<<add[i][j]<<" ";
		}
		cout<<endl;	
	}
	
	
}
