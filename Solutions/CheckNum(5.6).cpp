#include<iostream>
using namespace std;
int main()
{
	int n,z;
	cout<<"Enter the number: ";
	cin>>n;
	
	
	z=n%2;
	
	if(z==0)
	{
		cout<<n<<" is an even number"<<endl;
		cout<<"The upcoming odd number is "<<n+3;
	}
	else
	{
		cout<<n<<" is an odd number"<<endl;
		cout<<"The upcoming even number is "<<n-1;	
	}
}
