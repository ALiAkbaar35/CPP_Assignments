#include<iostream>
using namespace std;
int main()
{
	int array[5];
	int sum=0;
	for(int i=1;i<=5;i++)
	{
		cout<<"Enter data in index "<<i<<" : ";
		cin>>array[i];
		sum= sum+array[i];
	}
	cout<<"Sum of all variables is "<<sum;
	
}
