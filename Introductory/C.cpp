#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    char temp = 'A';
    int cnt = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (temp == str[i])
        {
            cnt++;
            ans = max(cnt, ans);
        }
        else
        {
            temp = str[i];
            cnt = 1;
        }
    }
    cout << ans;
    return 0;
}