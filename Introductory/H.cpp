#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k;
    cin >> k;
    for (ll n = 1; n <= k; n++)
    {
        cout << n * n * (n * n - 1) / 2 - 4 * (n - 1) * (n - 2) << endl;
    }
    return 0;
}