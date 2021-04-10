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
    ll n,s,d;
    cin>>n>>s>>d;
    ll flag=0;
    rep(i,n){
        ll x,y;
        cin>>x>>y;
        if(x<s)if(y>d)flag=1;
    }
    if(flag==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}