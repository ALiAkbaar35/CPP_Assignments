#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int n,n1,result;
	while(i!=0)
	{
		cout<<"Enter numbers: ";
    	cin>>n>>n1;
		result=n+n1;
		cout<<"sum of "<<n<<" + "<<n1<<" is equal to "<<result<<endl;
		cout<<"if u want to exit enter 0 or press any number to retake : ";
		cin>>i;
				
	}
	
}
