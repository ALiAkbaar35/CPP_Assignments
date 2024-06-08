#include <iostream>
using namespace std;
bool input(int &x, int place) {
    cout << "Enter " << place << " number : ";
    cin >> x;

    while (x % 2 == 0 || x < 0) {
        cout << "Number must be a positive odd number. Enter again...\n";
        cout << "Enter " << place << " number : ";
        cin >> x;
    }

    if (x > 999) {
        cout << "Number should not be greater than 999 ";
        return false;
    } else if (x >= 71 && x <= 82) {
        cout << "Number should not be between 71 and 82.";
        return false;
    } else if (x % 3 == 0) {
        cout << "Number should not be any multiple of 3.";
        return false;
    }

    return true;
}

int cube(int y){
  y=y*y*y;
  return y;	
}

int main() {
    int i,sum=0,limit = 0,test,max=0,min;
    int numbers[limit];
    cout << "How many Numbers U Want... ";
    cin >> limit;

    
    for ( i = 0; i < limit; i++) {
        if (!input(numbers[i], i + 1)) {
            return 0;
        }
		else{
			test=cube(numbers[i]);
			if (i == 0) {
                min = test; 
            }
			if(test<min){
				min=test;
			}
			else if(test>max)
			{
				max=test;
			}
		 	sum =sum+numbers[i];
		    
		}
        
    }
   		cout<<"Count "<<i<<endl;
   		cout<<"Sum of Given Numbers "<<sum<<endl;
   		cout<<"Avg of Given Numbers "<<sum/i<<endl;
   		cout<<"Maximum Number "<<max<<endl;
   		cout<<"Manimum Number "<<min<<endl;
   		
    

    return 0;
}

