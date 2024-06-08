#include<iostream>
#include <numeric>
using namespace std;
int main()
{
	int num1, num2,hcf,lcm;

    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

	if(num1>0 && num2>0)
	{
		for(int i=1; i<=num1 && i <= num2;i++)
		{
		   if(num1%i==0 && num2%i==0)
		   {
		   	 hcf=i;
		   }
			
		}
		lcm = (num1 * num2) / hcf;
		cout<<"hcf is "<<hcf<<endl;
		cout<<"lcm is "<<lcm<<endl;
		
    }
    else
    {
    	cout<<"Both numbers should be positive"<<endl;
	}
    
	
}
