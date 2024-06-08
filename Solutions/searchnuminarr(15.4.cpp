#include<iostream>
using namespace std;
int main()
{    int r,c,n;
	bool find=false;
	cout<<"Enter rows  : ";
	cin>>r;
	cout<<"Enter colums : ";
	cin>>c;
	
//  int arr[r][c]={{14,6,2,3},{8,7,6,0},{9,14,2,4},{2,18,4,3}};
	int arr[r][c];

	cout<<"\n\nEnter "<<r<<" x "<<c<<" Matrix  \n\n";
	for(int i = 0; i < r; i++)
	{  
	    cout<<"Enter Row "<<i+1<<" : ";
		for(int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}	
	
	}
		cout<<"Enter num  : ";
		cin>>n;
	for (int i = 0; i < r; ++i) 
	{
	        for (int j = 0; j < c; ++j) 
			{
	             if(arr[i][j]==n)
	             {
	             	find=true;
	            	cout<<"Row & Column = ("<<i<<" , "<<j<<" )"<<endl;
				 }
	        }
	}
	
	if(!find)
	{
		cout<<"Number Not Found....!";
	}

    return 0;

	
}
