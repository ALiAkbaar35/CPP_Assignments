#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i;
    int rem=0; 
    cout << "Enter a decimal number:";
    cin >> n;
    if (n <= 0)
    {
        cout << "Number should be greater than 0.";
    }
    else
    {
    	cout << "Equivalent Binary number : " ;
        for (i = 0; n != 0; i++)
        {
            
            rem =  n % 2; 
            cout<<rem;
            n = n / 2;
        }
         
    }
    return 0;
}

