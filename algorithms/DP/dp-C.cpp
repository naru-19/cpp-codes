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
    vector<vector<ll> >hp(n, vector<ll>(3));   
    vector<vector<ll> >dp(n,vector<ll>(3));
    rep(i,n){
        rep(j,3){
            dp.at(i).at(j)=0;
        }
        cin>>hp.at(i).at(0)>>hp.at(i).at(1)>>hp.at(i).at(2);
    }
    rep(i,n){
        if(i==0){
            rep(j,3){
                dp.at(i).at(j)=hp.at(i).at(j);
            }
        }
        else{
            rep(j,3){
                // aに行けるのは前日b,cのみb,cの大きい方のみ気にすれば良い
                dp.at(i).at(j)=max(dp.at(i-1).at((1+j)%3),dp.at(i-1).at((2+j)%3));
                dp.at(i).at(j)+=hp.at(i).at(j);
            }
        }
    }
    ll ans=0;
    ans=max(dp.at(n-1).at(0),dp.at(n-1).at(1));
    ans=max(ans,dp.at(n-1).at(2));
    cout<<ans<<endl;
    return 0;
}