#include<iostream>
using namespace std;
int main()
{	

	int n;
	int array[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	cout<<"Enter number : ";
	cin>>n;

   for (int i = 0; i <15; i++) 
   { 
   		for (int j = 0; j <15; j++) 
   		{ 
   
	     if (n==array[i]+array[j]+array[j+1])
		 {
		 	cout<<"( "<<array[i]<<" ,"<<array[j]<<" ,"<<array[j+1]<<" ) , ";
		 }
		 
		}  
   }
   
		
}
