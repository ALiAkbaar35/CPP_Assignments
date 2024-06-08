#include<iostream>
using namespace std;
int main()
{
	int r=4,c=4,n,rep;
	
	cout<<"Enter the search number ";
	cin>>n;
	cout<<"Enter the replace number ";
	cin>>rep;
	
	cout<<"\n\n";
	int arr[r][c]={{9,7,3,4},{5,7,6,2,2},{8,2,1,2},{8,3,7,4}};

	for(int i=0;i<r;i++)
	{  
		for(int j=0; j<c; j++) {
           cout<<arr[i][j]<<" ";
           if(n==arr[i][j])
           {
           	arr[i][j]=rep;
		   }
        }
        cout<<endl;
	}
	
	cout<<"\n\nAfter Replacing Number.\n\n";
	
	for(int i=0;i<r;i++)
	{  
		for(int j=0; j<c; j++) {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
	}	
	
	
}
