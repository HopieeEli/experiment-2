#include <iostream>
#include <string>

using namespace std;

int main()
{
    int hours;
    char package;
    cout << "Package A: P995/mo, 10 hrs of access" << endl;
    cout << "Package B: P1495/mo, 20 hrs of access" << endl;
    cout << "Package C: P1995/mo, unlimited access" << endl;
    cout << "Input package purchased:" << endl;
    cin >> package;
    cout << "Input total number of hours used:" << endl;
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
