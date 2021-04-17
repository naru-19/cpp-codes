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
    double a, b, c, d, n, h, w;
    string s;
    cin>>a>>b>>c;
    double x=b/a;
    ll ans=0;
    rep(i,10000000){
        if(i==0)continue;
        if(i/c<x){
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}