#include<iostream>
using namespace std;
int main()
{
	int n,result=0;
	bool cond=true;
	cout<<"Enter a number: ";
	cin>>n;
	
	if(n<0)
	{
		cout<<"Enter a positive number: ";
	}
	else
	{
	for (int i = 1; i <= n; i++)
        {
		        result=0;
		        for(int j=1;j<i;j++)
		        {
		      	    if(i%j==0)
		      	    {
		      			result=result+j;
				    }
			    }
			    
		      if(result==i)
		      {
		      	cond=false;
		      	cout<<i<<" is a perfect number"<<endl;
			  }
			  
     	}
     	
     	if(cond)
     	{
     		cout<<"There no perfect number find.";
		 }
	}
	
	return 0;
	
}
