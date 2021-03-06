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
    ll n,k;
    cin >> n >> k;
    vector<ll>h(n);
    vector<ll>dp(n);
    rep(i,n){
        dp.at(i)=INF;   
    }
    rep(i,n){
        cin>>h.at(i);
    }
    dp.at(0)=0;
    rep(i,n){
        if(i==0)continue;
        rep(j,k+1){
            if(j==0)continue;
            if(i>=j){
                chmin(dp.at(i),dp.at(i-j)+abs(h.at(i)-h.at(i-j)));
            }
        }
    }
    cout<<dp.at(n-1)<<endl;
    return 0;
}