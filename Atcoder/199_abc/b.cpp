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

int main()
{
    ll n;
    cin >> n;

    vector<int>a(n);
    vector<int>b(n);
    rep(i,n){cin>>a[i];}
    rep(i,n){cin>>b[i];}
    Sort(a);
    Sort(b);
    ll ans=0;
    ans=max(0,b[0]-a[n-1]+1);
    cout<<ans;
    
}