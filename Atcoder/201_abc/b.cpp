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
    cin>>n;
    vector<vector<ll> >y(n, vector<ll>(2));
    vector<string>name(n);
    rep(i,n){
        cin>>name[i]>>y[i][0];
        y[i][1]=i;
    }
    Sort(y);
    cout<<name[y[n-2][1]];
}