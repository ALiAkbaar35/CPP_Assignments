#include<iostream>
using namespace std;
int main()
{
	int array[5];
	int max=0,max2=0;

	for(int i=0;i<=4;i++)
	{	
		cout<<"Enter data in index "<<i+1<<" : ";
		cin>>array[i];
		
	}
		 
 	for(int i=0;i<=4;i++)
	{	
		if(array[i]>max)
		{
			max=array[i];

		}
	}
	
	for(int i=0;i<=4;i++)
	{	
		if(array[i]>max2 && array[i] != max)
		{
			max2=array[i];
		}
	}
	

	cout<<"\n2nd Maximum number is "<<max2<<endl;
	
}
