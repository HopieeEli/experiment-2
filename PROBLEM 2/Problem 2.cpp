#include <iostream>
#include <string>

using namespace std;

int main()
{
    int current_Reading, previous_Reading, unpaid_Balance;
    cout << "Enter water meter reading:" << endl;
    cin >> current_Reading;
    cout << "Current water meter reading: " << current_Reading << endl;
    cout << "Enter previous water meter reading:";
    cin >> previous_Reading;
    cout << "Previous water meter reading: " << previous_Reading << endl;
    cout << "Enter unpaid balance:" << endl;
    cin >> unpaid_Balance;
    cout << "Unpaid balance: P" << unpaid_Balance << endl;
    
    if (unpaid_Balance > 0)
    {
        cout << "You have incurred a P20 late charge due to unpaid bills" << endl;
        cout << "Water bill: P" << (((current_Reading-previous_Reading)*1.10)+20)+unpaid_Balance << endl;
    }
    else
    {
        cout << "Water bill: P" << (current_Reading-previous_Reading)*1.10 << endl;
    }
    return 0;
}

    


