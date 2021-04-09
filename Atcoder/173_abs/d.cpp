#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define Sort_d(a) sort(a.begin(), a.end(), greater<ll>())
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

int main()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    rep(i,n){
        cin>>a[i];
    }
    Sort_d(a);
    ll ans=0;
    ans+=a[0];
    rep(i,n/2){
        if(i==0)continue;
        ans+=2*a[i];
    }
    if(n%2==0){
        cout<<ans <<endl;
        return 0;
    }
    cout<<ans+a[n/2]<<endl;
    return 0;
}