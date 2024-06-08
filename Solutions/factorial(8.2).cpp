#include<iostream>
using namespace std;
int main()
{
	int fact=1,n=0;
	cout<<"Enter the Number ";
	cin>>n;
	if(n<1)
	{
		cout<<"Number should be greater than 1";
	}
	else
	{
		while(n>1)
		{
			fact = fact*n;
			cout<<n<<"*";
			n--;
		}
		
		cout<<"1\nFactorial of that number is "<<fact;
	}
	

}
