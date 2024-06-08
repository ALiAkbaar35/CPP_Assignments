#include<iostream>
using namespace std;
int main()
{    int r,c;
	cout<<"Enter rows  : ";
	cin>>r;
	cout<<"Enter colums : ";
	cin>>c;
//    int arr[r][c]={{14,6,2,3},{8,7,6,0},{9,1,2,4},{2,18,4,3}};
	int arr[r][c];
	bool rows[r] = {false};
    bool cols[c] = {false};
	cout<<"\n\nEnter "<<r<<" x "<<c<<" Matrix  \n\n";
	for(int i = 0; i < r; i++)
	{  
	    cout<<"Enter Row "<<i+1<<" : ";
		for(int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}	
	
	}
    for (int i = 0; i < r; ++i) 
	{
        for (int j = 0; j < c; ++j) 
		{
            if (arr[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
      
	for (int i = 0; i < r; ++i) 
	{
        for (int j = 0; j < c; ++j) 
		{
            if (rows[i] || cols[j]) {
                arr[i][j] = 0;
            }
        }
    }

    
	cout << "Modified Matrix:\n";
	for (int i = 0; i < r; ++i) 
	{
	        for (int j = 0; j < c; ++j) 
			{
	            cout << arr[i][j] << " ";
	        }
	        cout << endl;
	}

    return 0;

	
}
