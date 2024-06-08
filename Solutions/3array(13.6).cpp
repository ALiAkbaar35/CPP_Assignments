#include<iostream>
using namespace std;
int main()
{	

	int n,size=5;
	int arr[size],arr2[size],arr3[size],com[size];
//	int	arr[size]={1,2,3,4,5};
//	int	arr2[size]={9,5,6,7,11};
//	int	arr3[size]={10,11,4,44,11};
    cout << "Enter array " << 1 << " : ";
    for (int j = 0; j < size; j++) {
        cin >> arr[j];
    }
    
    cout << "\nEnter array " << 2 << " : ";
    for (int j = 0; j < size; j++) {
        cin >> arr2[j];
    }
    
    cout << "\nEnter array " << 3 << " : ";
    for (int j = 0; j < size; j++) {
        cin >> arr3[j];
    }
    
   
   
	   for(int i=0;i<size;i++)
		{	
			for(int j=0;j<size;j++)
			{	
				if( arr[i]==arr2[j]  )
				{
				
					cout<<arr[i]<<" , ";
				}
				else if( arr[i]==arr3[j])
				{
					cout<<arr[i]<<" , ";
				}
				else if( arr2[i]==arr3[j])
				{
					cout<<arr2[i]<<" , ";
				}
						
			}
		}
		
}
