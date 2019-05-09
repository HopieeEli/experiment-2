#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hours;
    char package;
    cout << "Package A" << endl;
    cout << "Package B" << endl;
    cout << "Package C" << endl;
    cout << "Enter package availed" << endl;
    cin >> package;
    cout << "enter number of hours used:" << endl;
    cin >> hours;
    
    if (package == 'A' && hours > 10)
        cout << "Total amount due: P" << 995 + (((hours-10) * 20)) << endl;
    
    else if (package == 'A' && hours <= 10)
        cout << "Total amount due: P995" << endl;
    
    if (package == 'B' && hours > 20)
        cout << "Total amount due: P" << 1495 + (((hours-20) * 10)) << endl;
    
    else if (package == 'B' && hours <= 20)
        cout << "Total amount due: P1495" << endl;
    
    if (package == 'C')
        cout << "Total amount due: P1995" << endl;
        
    return 0;
}
