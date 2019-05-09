#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    float x, y, z;
    z = 2.5;
    
    cout << "Enter value of x:" << endl;
    cin >> x;
    cout << "Enter value of y:" << endl;
    cin >> y;
    
    if (x == 1 && 1<y && y<5)
    {
        cout << fixed << setprecision(2) << x*y*z << endl;
    }
    else if (x == 1 && y>=5)
    {
        cout << fixed << setprecision(2) << x + (y/z) << endl;
    }
    else if (x == 2 && y<=5)
    {
        cout << fixed << setprecision(2) << abs((x-y)/z) << endl;
    }
    else if (x == 2 && y>5)
    {
        cout << fixed << setprecision(2) << x - sqrt(y+z) << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << x+y+z << endl;
    }
    return 0;
}
