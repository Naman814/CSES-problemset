#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                cout << (y * y) - x + 1;
            }
            else
            {
                cout << (y - 1) * (y - 1) + x;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                cout << (x * x) - y + 1;
            }
            else
            {
                cout << (x - 1) * (x - 1) + y;
            }
        }
        cout << "\n";
    }
    return 0;
}
