#include <iostream>
using namespace std;

int main()
{
    bool LOOPLS = false;
    do {
        int x, sum = 0;
        cout << "Enter any number: ";
        cin >> x;
        
        if ( x > 0){
            
            for (int i = 1; i <= x; ++i) {
                sum += i;
            }
            cout << "The sum of all whole numbers from 1 to " << x << " is " << sum<< endl;;
            
        }
        
        
        else {
            cout << "Thank You!";
            
        }
        
    }while (!LOOPLS);
    
    return 0;
}
