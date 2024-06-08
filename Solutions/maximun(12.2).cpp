#include<iostream>
using namespace std;
int main()
{
	int array[5];
	int max=0,min=0;
	cout<<"Enter 5 integers \n";
	for(int i=0;i<=4;i++)
	{	
	
		cin>>array[i];
		
	}
		 min=array[0];
		 
 	for(int i=0;i<=4;i++)
	{	
		if(array[i]>max)
		{
			max=array[i];
		}
		else if(array[i]<min)
		{
			min=array[i];
		}
		
	}
	

	cout<<"Maximum number is "<<max<<endl;
	cout<<"Manimum number is "<<min;
	
}
