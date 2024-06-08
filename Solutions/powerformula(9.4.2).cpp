#include<iostream>
using namespace std;

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
		int power = 1;
		for (int i = 1; i <= n; i++) 
		{
	        int sum = 1;
	        for (int j = 0; j < power; j++) 
	        {
	            sum *= x;
	        }
	        
	        if(i % 2 == 0)
			{
				total -= sum;
			}
			else
			{
				total += sum;
			}
			
			power += 2;
		}
		
		cout<<"Total: "<<total<<endl;
	}
	
	return 0;
}

