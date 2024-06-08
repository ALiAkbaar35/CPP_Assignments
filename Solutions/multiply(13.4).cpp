#include<iostream>
using namespace std;
int main()
{	

	int k;
	int array[k];
	cout<<"how many integers you want to enter : ";
	cin>>k;

	for(int i=0;i<=k-1;i++)
	{	
		cout<<"Enter data in index "<<i+1<<" : ";
		cin>>array[i];
	}
	
	int array2[k]={0};
	

   for (int i = 0; i <k; i++) 
   { 
        if(i==0 || i==k-1)
        {	
            cout<<i+1<<" index ( 1 *"<<array[i]<<" ) = ";
        	array2[i]=1*array[i];
        	
     	}
     	else
     	{
//     		if(i==k-1)
//     		{	
//			 	cout<<i+1<<" index ( 1 *"<<array[i]<<" ) = ";
//     			array2[i]=1*array[i];	
//			 }
//			else
//			{
				cout<<i+1<<" index ("<<array[i+1]<<" * "<<array[i-1]<<" ) = ";
				array2[i]=array[i+1]*array[i-1];		
			//}
		 }
     	 
    	cout<<array2[i]<<endl; 
   }
		
}
