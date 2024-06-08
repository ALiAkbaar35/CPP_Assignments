#include <iostream>
#include <string>
using namespace std;
int main() {
    double length,temp;
    char input_unit, output_unit;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter unit of input length (k=kilometer, M=meter, c=centimeter, m=millimeter): ";
    cin >> input_unit;

    cout << "Enter unit of output length (k=kilometer, M=meter, c=centimeter, m=millimeter): ";
    cin >> output_unit;
    temp=length;
	
    if (input_unit == 'k')
	{
        length *=1000; 
    } 
	else if (input_unit == 'M') 
	{
        
    }
	else if (input_unit == 'c') 
	{
        length /= 100; 
    }
	else if (input_unit == 'm') 
	{
        length /= 1000; 
    }
    
    cout<<endl;

    if (output_unit == 'k') 
	{
        length *= 1000; 
    } 
	else if (output_unit == 'M') 
	{
        
    }
	else if (output_unit == 'c') 
	{
        length *= 100;
    } 
	else if (output_unit == 'm') 
	{
        
        length *= 1000;
    }

    cout << temp << " " << input_unit << " are equal to " << length << " " << output_unit << endl;

    return 0;
}

