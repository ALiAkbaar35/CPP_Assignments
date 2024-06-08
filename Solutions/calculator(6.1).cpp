#include<iostream>
using namespace std;

int main()
{
	float n,n2;
	float result;
	char op;
	cout<<"Enter 1st number"<<endl;
	cin>>n;
	cout<<"Enter 2nd number"<<endl;
	cin>>n2;
	cout<<"Enter the operator"<<endl;
	cin>>op;
	
	switch(op)
	{
		case '/':
			result = n/n2;
			cout<<"result: "<<result;
			break;
		case '*':
			result = n*n2;
			cout<<"result: "<<result;
			break;
		case '-':
			result = n-n2;
			cout<<"result: "<<result;
			break;	
		case '+':
			result = n+n2;
			cout<<"result: "<<result;
			break;
		default: 
			cout<<"Plz select any of operator from this (+,  -,  /,  *)";
			break;
	}
		
}
