#include<iostream>
using namespace std;
int main()
{
	int n,result=0;
	cout<<"Enter a number: ";
	cin>>n;
	
	if(n<0)
	{
		cout<<"Enter a positive number: ";
	}
	else
	{
	for (int i = 2; i <= n; i++)
        {
		    if(n%i==0)
		    {
		        result=0;
		        for(int j=2;j<=i;j++)
		        {
		      	    if(i%j==0)
		      	    {
		      	    	
		      			result=result+1;
				    }
			    }
			    
		      if(result==1)
		      {
		      	cout<<i<<",";
			  }
			}
		
			
     	}
	}
	
}
