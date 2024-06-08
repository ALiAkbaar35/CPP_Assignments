#include<iostream>
using namespace std;
int main()
{
	int r=5,c=5,space=0;
	int temp;

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
	int j=0,k=0;
	for(int i=0;i<r;i++)
	{  
	    j=k;
	    
	    for(int s=0;s<space;s++)
		{
			cout<<" ";	
		}
		if(i==2)
		{
			for(int n=2;n<c;n++)
			{
				for(int m=2;m<c-1;m++)
				{
					if(arr[i][n]>arr[i][m+1])
					{
					    temp = arr[i][m+1];
						arr[i][m+1]=arr[i][m];
						arr[i][m]= temp;
					}
				}
			}	
		}
	    

		for(j;j<c;j++)
		{
			 	
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
		k++;
	    space+=2;
			
	}
	

	
}
