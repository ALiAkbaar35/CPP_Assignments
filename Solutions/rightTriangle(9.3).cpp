#include<iostream>
using namespace std;
int main()
{
	int rows=4,n=1,num=1;
	for (int r=1; r<=rows; r++)
	{

		for(int y=1; y<=num;y++)
		{
			cout<<n<<" ";
			n++;
		}
		cout<<endl;
		num=num+1;		
	}
}
