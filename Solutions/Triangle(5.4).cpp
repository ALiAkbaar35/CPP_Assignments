#include<iostream>
using namespace std;
void input(int &x,string angle){
  cout<<"Enter "<<angle<<" angle: ";
  cin>>x;
  while(x<0 || x>360){
  	cout<< "Angle should be between 0 and 360. Please re-enter " << angle << " angle : ";
  	cin>>x;
  }
}
int main()
{
	int ang1,ang2,ang3,totalangle;
	input(ang1,"1st");
	input(ang2,"2nd");
	input(ang3,"3rd");
	
	totalangle=ang1+ang2+ang3;
	
	if(totalangle<=180){
		if((ang1==90)||(ang2==90)||(ang3==90))
		{
			cout<<"This is a right triangle";
		}
		else
		{
			cout<<"This is a triangle";	
		}  
	}
	else
	{
		cout<<"It's not triangle."<<endl;
	}
	
	
	
	
}
