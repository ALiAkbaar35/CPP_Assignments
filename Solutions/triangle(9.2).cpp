#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"Enter number of rows ";
	cin>>rows;
	int stars=1;
	int spaces=rows;
	for (int r=1; r<=rows; r++)
	{
		for(int x=1; x<=spaces;x++)
		{
			cout<<" ";
		}
		for(int y=1; y<=stars;y++)
		{
			cout<<"*";
		}
		cout<<endl;
		spaces=rows-r;
		stars=stars+2;
	}
}
