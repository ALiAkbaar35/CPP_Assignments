#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter temperature: ";
	cin>>temp;
	if(temp<0)
	{
		cout<<"Freezing weather";
	}
	else
	{ 	if(temp<=10)
		{
			cout<<"Very Cold weather";	
		}
		else
		{
			if(temp>10 && temp<=20)
			{
				cout<<"Cold weather";	
			}
			else
			{
				if(temp>20 && temp<=30)
				{
					cout<<"Normal in Temp";	
				}
				else
				{
					if(temp>30 && temp<=39)
					{
						cout<<"Its Hot";	
					}
					else
					{
						cout<<"Its Very Hot";
					}
				}
					
			}
		}
		
	}
}
