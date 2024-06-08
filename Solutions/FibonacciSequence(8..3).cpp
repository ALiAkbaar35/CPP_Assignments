#include<iostream>
using namespace std;
int main()
{
	int limit=0,f1=0,f2=1,f=0;
	cout<<"Enter the limit ";
	cin>>limit;
	cout<<"Fibonacci sequence is\n"<<f1<<","<<f2<<",";
	for (int i=1; i<=limit-2;i++)
	{
		f =f1+f2;
		cout<<f<<",";
		f1=f2;
		f2=f;
	}
	cout<<"........";
}
