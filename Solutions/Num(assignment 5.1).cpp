#include<iostream>
using namespace std;
int main()
{
	int num=0;
	cout<<"Enter the number: ";
	cin>>num;
	if(num==0)
	{
		cout<<"Number is zero"<<endl;
	}
	else
	{
		if(num>0)
		{
		   cout<<"Number is positive"<<endl;
		}
		else
		{
	       cout<<"Number is negetive"<<endl;	
		}
	}
}
