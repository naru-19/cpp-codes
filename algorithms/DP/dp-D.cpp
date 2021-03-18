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
    ll n,w;
    cin>>n>>w;
    vector<vector<ll> >w_v(n, vector<ll>(2));
    vector<vector<ll> >dp(n+1, vector<ll>(w+1));
    rep(i,n){
        cin>>w_v.at(i).at(0)>>w_v.at(i).at(1);
    }
    Sort(w_v);
#ifndef DEBUG_ON
    cout<<"chk1"<<endl;
#endif    
    rep(i,n+1){
        rep(j,w+1){
            dp.at(i).at(j)=0;
        }
    }

    rep(i,n){
        rep(j,w+1){
            if(j-w_v.at(i).at(0)>=0){
                chmax(dp.at(i+1).at(j),dp.at(i).at(j-w_v.at(i).at(0))+w_v.at(i).at(1));
            }
            chmax(dp.at(i+1).at(j),dp.at(i).at(j));
        }
    }
#ifndef DEBUG_ON
    cout << "chk2" << endl;
#endif
    cout<<dp.at(n).at(w)<<endl;
    return 0;
}