#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    n = 22;
    cout << "The first 22 terms of the Fibonacci Sequence are: " << endl;
    
    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " " << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}
