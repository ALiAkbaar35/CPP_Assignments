#include<iostream>
using namespace std;
int main()
{	

	int k=5;
	int adj=0;
	int x=0,y=0,index=0;
	int maxAdj;
	int array[k];
	cout<<"how many integers you want to enter : ";
	cin>>k;

	for(int i=0;i<=k-1;i++)
	{	
		cout<<"Enter data in index "<<i+1<<" : ";
		cin>>array[i];
	}
	
	

     for (int j = 0; j <k; j++) 
     { 
        if(j==0)
        {	
            maxAdj=array[j]-array[j+1];	
            if(maxAdj<0)
		   {
		   	maxAdj=maxAdj*-1;
		   }
		   cout<<" L = 0 "<<", R = "<<maxAdj<<"  = ";
     	}
     	else if(j==k-1)
     	{
     	   maxAdj=array[j]-array[j-1];
     	   
     	   if(maxAdj<0)
		   {
		   	maxAdj=maxAdj*-1;
		   }
		   
		    cout<<" L = "<<maxAdj<<" , R = 0 "<<" = ";
		}
		else
		{ 
		   x=array[j]-array[j-1];
		   y=array[j]-array[j+1];
		   if(x<0)
		   {
		   	x=x*-1;
		   }
		    if(y<0)
		   {
		   	y=y*-1;
		   }
		   cout<<" L = "<<x<<" , R = "<<y<<"  = ";
		    if(x>y)
		   {
		   	 
		   	 maxAdj=x;	
		   }
		   else
		   {
		   	 maxAdj=y;	
		   }
		  
		}
		
		
		if(maxAdj>adj)
		{
			index=j;
			adj=maxAdj;
		}
		
		
		cout<<maxAdj<<endl;
     } 
     cout<<"\n Maximum adjacent "<<adj;
		
}
