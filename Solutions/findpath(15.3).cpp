#include<iostream>
using namespace std;
int main()
{    int r=4,c=4,n;
	 int path=0;
	 bool rows[r] = {false};
     bool cols[c] = {false};
     rows[0]=true;
     cols[0]=true;
//	cout<<"Enter rows  : ";
//	cin>>r;
//	cout<<"Enter colums : ";
//	cin>>c;
	
 
  int arr[r][c]={ {7,9,2,3},
				  {8,7,6,0},
				  {9,4,2,4},
				  {2,8,4,3}};
//	int arr[r][c];

//	cout<<"\n\nEnter "<<r<<" x "<<c<<" Matrix  \n\n";
//	for(int i = 0; i < r; i++)
//	{  
//	    cout<<"Enter Row "<<i+1<<" : ";
//		for(int j = 0; j < c; j++)
//		{
//			cin >> arr[i][j];
//		}	
//	
//	}




	for (int i = 0; i < r; ++i) 
	{
	        for (int j = 0; j < c; ++j) 
			{
	             if(i==0 && j==0)
	             {
	             	int temp=arr[i][j];
	             	if(arr[i][j+1]>arr[i+1][j])
	             	{
	             		rows[i+1] = true;
               			cols[j] = true;
	             		break;
					 }
					else
					{
						rows[i] = true;
               			cols[j+1] = true;
               			break;
					}
					
				 }
				 
				 
				
				
	        }
	}
//	
	for (int i = 0; i < r; ++i) 
	{
        for (int j = 0; j < c; ++j) 
		{
            if (rows[i] && cols[j]) {
               	cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;

	
}
