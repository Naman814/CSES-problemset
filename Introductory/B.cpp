#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n-1];
    for (int i = 0; i < n-1; i++)
        cin >> a[i];
    map<int,bool> m;
    for(int i=0;i<n-1;i++){
        m[a[i]]=true;
    }
    for(int i=1;i<=n;i++){
        if(m.find(i)==m.end()){
            cout<<i;
            break;
        }
    }
    return 0;
}