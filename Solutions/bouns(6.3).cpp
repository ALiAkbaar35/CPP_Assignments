#include<iostream>
using namespace std;
int main()
{
	int current_month=5,current_year=2024;
	int jion_month,join_year,months;
	float bouns,salary;
	cout<<"Enter the Joinng month: ";
	cin>>jion_month;
	cout<<"Enter the Joinng year: ";
	cin>>join_year;
	cout<<"Enter Salary: ";
	cin>>salary;
	months=months=(current_year-join_year)*12+(current_month-jion_month);
	
	if(months<61)
	{
	 	cout<<"Bonuses given only to individuals with five years of experience.";
	}
	else
	{
		bouns=(salary*0.05)*months;
		cout<<"Bonus of "<<months<<" months is "<<bouns; 
		
	}
	
}
