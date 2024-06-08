#include<iostream>
using namespace std;
int main()
{
	int start,end;
	cout<<"Enter starting year ";
	cin>>start;
	cout<<"Enter ending year ";
	cin>>end;
	for(start;start<=end;start++)
	{
		if((start%4==0 && start%100!==0 ) || (start%400==0))
		{	
			cout<<start<<" is a leap year"<<endl;
		}
		else
		{
			cout<<start<<" is not leap year"<<endl;	
		}
		
	}
}
