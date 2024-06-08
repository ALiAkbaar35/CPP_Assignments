#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int Sys_year=2024;
    int year=0,DOB=0;
    cout<<"Enter Your DoB Year(..2001): ";
    cin>>DOB;
    if(DOB<=2024)
    {
    	year=Sys_year - DOB;
    	if(year>=18)
    	{
    	  cout<<"Welcome, you can join us";
		}
    	else
    	{
    	  	cout<<"Sorry. You're can't join us now. You may try after "<<18-year<<" year";
		}
    	
	}
	else
	{
		cout<<"Plz Enter Data for above given Format etc 2000..";
	}
        
    return 0;
}

