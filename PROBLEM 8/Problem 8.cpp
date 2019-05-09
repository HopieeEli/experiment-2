#include <iostream>

using namespace std;
int main()
{
    int y;
    
    cout<<"Enter multiplicand:" << endl;
    cin >> y;
    
    for (int x = 1; x <= 10; x++){
        cout << x << "*" << y << " = "<< y * x <<endl;
        
    }
    
    return 0;
}
