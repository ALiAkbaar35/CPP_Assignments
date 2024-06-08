#include<iostream>
using namespace std;
int main()
{	

	int k;
	int wave=true;
	int array[k];
	cout<<"how many integers you want to enter : ";
	cin>>k;

	for(int i=0;i<=k-1;i++)
	{	
		cout<<"Enter data in index "<<i+1<<" : ";
		cin>>array[i];
	}
	
	

   for (int i = 0; i <k; i++) 
   { 
     for (int j = 0; j <k; j++) 
     { 
        if (array[j] == array[j+1] || array[j]==array[j-1] ) 
        { 
		    wave=false;
        } 
     } 
   }
   
   if(wave)
   {
   	cout<<"Array in wave form.";
   }
   else
   {
   	cout<<"Array not in wave form.";
	} 
		
}
