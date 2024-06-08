#include<iostream>
using namespace std;
int factorial(int &n)
{ int fact=1;
	while(n>1)
		{
			fact = fact*n;
			n--;
		}
	return fact;
}
int main()
{
	int x, n;
	double total = 0;
	
	cout<<"Enter the number: ";
	cin>>x;
	
	cout<<"How many exponents: ";
	cin>>n;
	
	if(n < 1)
	{
		cout<<"Number of exponents should be greater than 0";
	}
	else
	{
		
		while(n>1)
		{
			int sum = 1;
			int fact = 1;
			cout<<"1 + "<<x;
	        for (int j = 0; j < n; j++) 
	        {
	            sum *= x;
	        }
			fact = factorial(n);
			cout<<" + "<<sum<<"/"<<fact;
			n--;
		
			
			total = total+(sum/fact);
			
		}
		
		
		
		cout<<"\nTotal: "<<1+x+total<<endl;
	}
	
	return 0;
}

