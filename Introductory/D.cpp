#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cnt+=(a[i]-a[i+1]);
            a[i+1]=a[i];
        }
    }
    cout<<cnt;
    return 0;
}