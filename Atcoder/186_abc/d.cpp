
#include <bits/stdc++.h>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<ll> a(n);
    ll sum;
    ll l;
    sum=0;
    rep(i,n){
        cin>>l;
        a.at(i)=l;
        sum+=l;
    }
    sort(a.begin(),a.end());

    ll ans=0;
    rep(i,n){
        ans+=sum-(n-i)*a[i];
        sum-=a[i];
    }
    cout<<ans;
}
