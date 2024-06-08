#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the weekday: ";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Sunday";
			break;
		case 2:
			cout<<"Monday";
			break;	
		case 3:
			cout<<"Tuesday";
			break;
		case 4:
			cout<<"Wednesday";
			break;
		case 5:
			cout<<"Thrusday";
			break;
		case 6:
			cout<<"Friday";
			break;
		case 7:
			cout<<"SatuardaY";
			break;
		default:
			cout<<"Entered number is wrong";
			break;
	}
}
