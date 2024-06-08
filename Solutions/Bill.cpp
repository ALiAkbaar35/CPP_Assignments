#include<iostream>
using namespace std;
int main()
{
	int units=0,low,mid,high;
	float lowprice=11.25,midprice=14.99,highprice=18.65,TotalAmount=0;
	cout<<"Enter Units :";
	cin>>units;
	if(units<0)
	{
	   cout<<"Unit Should be a positive Number";
	}
	
    else{
    	
	   	if(units>0 && units<101)
		{ 
		  TotalAmount=units*lowprice;  
		}
		else
		{
		if(units>=101 && units<151)
			{
			  mid=units-100;
			  TotalAmount=(100*lowprice)+(mid*midprice);
			}
		else{
		      high=units-150;
			  TotalAmount=(100*lowprice)+(50*midprice)+(high*highprice);
			  
	     	}
		
	}
	
	cout<<"Your total electricity bill is "<<TotalAmount<<" PKR";
   }
   
   return 0;
   
}
