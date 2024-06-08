#include<iostream>
using namespace std;
int main()
{
	int r=4,c=4;
	int arr[r][c]={{9,7,3,4},{5,7,6,2,2},{8,2,1,22},{8,3,7,4}};
	int min=arr[0][0];
	int max=0;
	float Ravg=0,Cavg=0;
	for(int i=0;i<r;i++)
	{  
	     Ravg=0;
		for(int j=0;j<c;j++)
		{
		
		 if(min>arr[i][j])
		 {
		 	min=arr[i][j];	
		 }
		 if(max<arr[i][j])
		 {
		 	max=arr[i][j];	
		 } 
		 Ravg=Ravg+arr[i][j];
		}
		
		cout<<"Row "<<i+1<<" Average is "<< Ravg/c<<endl;
	}
		cout<<endl;
		
    for(int j=0; j<c; j++) {
         Cavg = 0;
        for(int i=0; i<r; i++) {
            Cavg += arr[i][j];
        }
        cout<<"Column "<<j+1<<" Average is "<<Cavg/r<<endl;
    }
		
		cout<<endl;
	
	cout<<"Maximum num is "<<max<<endl;
	cout<<"Manimum num is "<<min<<endl;
	
	
	
	
}
