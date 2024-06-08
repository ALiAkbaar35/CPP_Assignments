#include<iostream>
using namespace std;
int cube(int n){
	int fact =1;
    while(n>1)
		{
			fact = fact*n;
			n--;
		}
	return fact;
}
int main()
{
	int n,armstrong,d1,d2,d3,temp;
	cout<<"Enter the 3 digit number: ";
	cin>>n;
	if(n>99 && n<=999)
	{
		//1ST digit
		d1=n%10;
	    
	    //2nd digit
	    temp=n/10;
	    d2=temp%10;

	    //3rd digit
	    temp=temp/10;
	    d3=temp%10;
        
        armstrong=cube(d1)+cube(d2)+cube(d3);
        
        if(n==armstrong)
		{
      	    cout<<n<<" is an strong number."<<endl;	
		}
		else
		{
			cout<<n<<" isn't an strong number."<<endl;	
		}
             		
	}
	else
	{
		cout<<"Plz enter 3 digit number positive number.";
	}
}
