#include<iostream>
using namespace std;
int main()
{	

	int temp,k=0;
	int array[5];
	for(int i=0;i<=4;i++)
	{	
		cout<<"Enter data in index "<<i+1<<" : ";
		cin>>array[i];
	}
	
	cout<<"how many largest element you want to find : ";
	cin>>k;


   for (int i = 0; i <=4; i++) 
   { 
     for (int j = 0; j <= 4; j++) 
     { 
        if (array[j] < array[j+1]) 
        { 
		    temp =array[j+1] ; 
		    array[j+1] = array[j]; 
		    array[j] = temp; 
        } 
     } 
   } 

	for(int i=0;i<k;i++)
	{	
		cout<<array[i]<<" , ";
	}
		
}
