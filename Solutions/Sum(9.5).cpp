#include<iostream>
using namespace std;
int main()
{
	int sum=1,n=0;
	double total=0;
	cout<<"Enter the Number ";
	cin>>n;
	if(n<1)
	{
		cout<<"Number should be greater than 1";
	}
	else
	{
		cout<<"Step : 1 * 1  = 1";
		while(n>1)
		{   
		    cout<<"\nStep : "<<sum<<" * 10 + 1 = ";
			sum = sum*10+1;
			total=total+sum;
			cout<<total;
			n--;
		}
		
		cout<<"\nSum of all numbers is "<<total+1;
	}
	

}
