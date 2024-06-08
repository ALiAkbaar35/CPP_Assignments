#include<iostream>
using namespace std;
void input(int &x,string subject){
  cout<<"Enter the marks of "<<subject<<" : ";
  cin>>x;
  while(x<0 || x>100){
  	cout<< "Marks should be between 1 and 100. Please re-enter the marks of " << subject << " : ";
  	cin>>x;
  }
}
int main()
{
	int english, mathematics, computerScience, socialStudies, generalScience;
	float percentage=0;
	input(english,"english");
	input(mathematics,"mathematics");
	input(computerScience,"computerScience");
	input(socialStudies,"socialStudies");
	input(generalScience,"generalScience");

	if( mathematics >= 75 && computerScience >= 80 )
	{
	  if ((english <= 39 && socialStudies <= 39) ||
        (english <= 39 && generalScience <= 39) || 
        (socialStudies <= 39 && generalScience <= 39)) 
        cout<<"Grade: F";
	else
	{
        percentage = ((english + mathematics + computerScience + socialStudies + generalScience) / 500.0) * 100;
    	cout<<"percentage "<<percentage<<endl;  
	    if(percentage>80.0 && percentage<=100.0)
		{
         	cout<<"Grade: A";
		}
		else
		{
			if(percentage>=61.0 && percentage<=80.0)
			{
	         	cout<<"Grade: B";
			}
			else
			{
				if(percentage>=40.0 && percentage<=60.0)
				{
		         	cout<<"Grade: C";
				}
				else
				{
					cout<<"Grade: F";
				}
				 		
			}
		 		
		}
    }
				
	}
	else
	{
		cout<<"Grade: F";
	}	
}
