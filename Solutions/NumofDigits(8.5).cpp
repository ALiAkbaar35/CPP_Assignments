#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter number: ";
    cin>>n;
    if(n==0)
    {
       cout<<"Number of digits is 1.";
	}
    else
	{
	for(i=0;n!=0;i++)
    {   
    	n=n/10;
    	cout<<n<<endl;
	}
	
	cout<<"Number of digits is "<<i;
	}
}
