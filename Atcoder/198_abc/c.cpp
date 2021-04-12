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
    ll r,x,y;
    cin>>r>>x>>y;
    double d=pow(x*x+y*y,0.5);
    if(r>d){
        cout<<2;
        return 0;
    }
    ll di=d;
    if(di!=d)di++;
    ll ans=min(1,int(di%r));
    cout<<di/r+ans;
}