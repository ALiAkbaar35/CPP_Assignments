#include<iostream>
using namespace std;
int main()
{
	int x,y;
	string z;
	cout<<"Enter y coordinate value of point: ";
	cin>>x;
	cout<<"Enter y coordinate value of point: ";
	cin>>y;
	if(x>-1 && y>-1)
	{
		z="1st";
	}
	else if(x<0 && y>-1 )
	{
		z="2nd";
	}
	else if(x<0 && y<0 )
	{
		z="3rd";
	}
	else
	{
		z="4th";
	}
	
	cout<<"The point lies in " << z << " quadrant.";
}
