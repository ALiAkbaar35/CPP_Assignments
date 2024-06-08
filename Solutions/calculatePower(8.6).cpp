#include<iostream>
using namespace std;
int main()
{
	int n,p,z;
	cout<<"Enter number ";
	cin>>n;
	cout<<"Enter power ";
	cin>>p;
	z=n;
	
	if(p<0)
	{
	  	cout<<"Power Should be a positive number ";
	}
	else
	{
		if(p==0)
		{
		    n=1;
		}
		else
		{
	
		for(int i=1; i<p;i++)
		{
			  n=n*n;
		
		}	
		}
	cout<<z<<" power "<<" "<<p<<" is equal to "<<n;
	}
}
	
