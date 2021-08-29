#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << "0";
        return 0;
    }
    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    if (n & 1 == 0)
    {
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (int i = n - 1; i > 0; i -= 2)
        {
            cout << i << " ";
        }
        for (int i = n; i > 0; i -= 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}