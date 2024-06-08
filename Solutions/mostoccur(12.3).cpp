#include<iostream>
using namespace std;
int main()
{
	int array[5];
	int most=0;
	int count=0;
	cout<<"Enter data in array\n";
	for(int i=0;i<=4;i++)
	{	
		cin>>array[i];
	}
		 
 	for(int i=0;i<=4;i++)
	{	
	   int tempcount=0;
	   int tempmost=array[i];
	   for(int j=0;j<=i;j++)
	   {
		   	if(tempmost==array[j])
		   	{
		   		tempcount++;
			}
			if(tempcount>count)
			{
				most=tempmost;
				count=tempcount;
			}
	   }
	}
	
	if(count>1)
	{
		cout<<"Most occurring number is "<<most;
	}
	else
	{
		cout<<"There is no repeating number";
	}
}
