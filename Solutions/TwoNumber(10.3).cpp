#include<iostream>
using namespace std;
int main()
{
	int n,m,s,result=0;
	cout<<"Enter 1st number : ";
	cin>>n;
	cout<<"Enter 2nd number : ";
	cin>>m;
	cout<<"Enter stop number : ";
	cin>>s;
//	for(n=m;n<=m && result!=s;n++)
//	{
		
		while(m>=1 && result!=s)
		{
		
		if( m%2==0 && m%3==0)
		{
			result =m;
			cout<<result<<" , ";
		}
		m--;
	//	}		
	}
	
	
	
}
