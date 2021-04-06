#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define INF 100100100100100100
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

#define DEBUG_ON

void binary(ll l,ll r,vector<ll>a,ll n,ll k){
    while(l+1<r){
        ll mid=(l+r)/2;
        ll count=0;
        rep(i,n){
            ll ama=min(ll(1),a[i]%mid);
            count+=a[i]/mid+ama-1;
        }
        // cout<<mid<<":"<<count <<endl;
        if(count<=k){
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<r<<endl;
    return ;
}

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll mi=INF;
    ll ma=0;
    rep(i,n){
        cin>>a[i];
        // mi=min(mi,a[i]);
        ma=max(ma,a[i]);
    }
    if(k==0){
        cout<<ma;
        return 0;
    }
    binary(0,ma,a,n,k);
}