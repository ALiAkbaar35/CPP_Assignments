#include<iostream>
using namespace std;
int main()
{
	char n;
	int x;
	cout<<"Enter the letter from a-z Or A-Z: ";
	cin>>n;
	
	if(n>64 && n<91 || n>98 && 123){
		cout<<"Acceptable";
	}
	else
	{
		cout<<"Not cceptable";
	}
}
