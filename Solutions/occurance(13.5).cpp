#include<iostream>
using namespace std;
int main()
{	

	int n,count=0;
	int array[5]={1,2,3,4,4};
	cout<<"Enter number : ";
	cin>>n;

   for (int i = 0; i <5; i++) 
   { 
	    if (array[i]==n)
		 {
		 	count++;
		}  
   }
   
   if(count>0)
   {
   	cout<<n<<" occur "<<count<<" times in given array";
   }
   else
   {
   	cout<<n<<" does not occur in given array";
   }
		
}
