#include<iostream>
#include <string>

using namespace std;

int main()
{
	int n,d1,d2,d3,temp,sum=0;
	string rev;
	cout<<"Enter the 3 digit number: ";
	cin>>n;
	if(n>99 && n<=999)
	{
		//1ST digit
		d1=n%10;
		sum=(sum*10)+d1; 

	    
	    //2nd digit
	    temp=n/10;
	    d2=temp%10;
		sum=(sum*10)+d2; 

	    //3rd digit
	    temp=temp/10;
	    d3=temp%10;
		sum=(sum*10)+d3; 
		
		
		cout<<"Reverse num is "<<sum<<endl;
             		
	}
	else
	{
		cout<<"Plz enter 3 digit number positive number.";
	}
}
