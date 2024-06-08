#include<iostream>
using namespace std;
int main()
{
	int r=4,c=4,sum=0;
	int arr[r][c];
	cout<<"Enter 4x4 Matrix  \n\n";
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
           if(i==0)
            {
             cout<<"0 + "<<arr[i+1][i]<<" = "<<arr[i+1][i]<<endl;
           	 sum=sum+ arr[i+1][i];
		    }
			else if(i!=r-1)
			{
				cout<<arr[i+1][i]<<" + "<<arr[i-1][i]<<" = "<<arr[i+1][i]+arr[i-1][i]<<endl;
				sum=sum+arr[i+1][i]+arr[i-1][i];
			}
			else
			{   sum = sum + arr[i-1][i];
				cout<<arr[i][i]<<" + 0 "<<"= "<<arr[i-1][i] <<endl;
			}
			     
	}
	
	
	
	cout<<"sum of elements above & below the main diagonal = "<<sum;
	
	
}
