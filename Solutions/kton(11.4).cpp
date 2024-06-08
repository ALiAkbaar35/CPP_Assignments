#include<iostream>
using namespace std;
int sum(int &n)
{		int result,sum=0;
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
		      { sum=sum+i;
		      	cout<<i<<",";
			  }
			}
		
			
     	}
     	
	return sum;
}
int main()
{
	int n,k,result=0;
	
	cout<<"Enter k: ";
	cin>>k;
	cout<<"Enter n: ";
	cin>>n;
	
	if(n<0 || k<0 || k>n)
	{
		cout<<"Enter positive k and n (k<n): ";
	}
	else
	{
		for(k;k<=n;k++)
		{
		  cout<<"Factors of "<<k<<endl<<"Sum of factors =  "<<sum(k)<<endl<<endl;
		}	

	}
	
}
