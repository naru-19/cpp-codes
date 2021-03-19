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
    ll n,w,sumv;
    cin>>n>>w;
    vector<vector<ll> >w_v(n, vector<ll>(2));
    sumv=0;
    rep(i,n){
        cin>>w_v.at(i).at(0)>>w_v.at(i).at(1);
        sumv+=w_v.at(i).at(1);
    }
    vector<vector<ll> >dp(n+1, vector<ll>(sumv+1));
    Sort(w_v);
#ifndef DEBUG_ON
    cout<<"chk1"<<endl;
#endif    
    rep(i,n+1){
        rep(j,sumv+1){
            dp.at(i).at(j)=INF;
        }
    }
    dp.at(0).at(0)=0;
    rep(i,n){
        //各価値の最小重さを更新していく
        rep(j,sumv+1){
            if(j-w_v.at(i).at(1)>=0){
                chmin(dp.at(i+1).at(j),dp.at(i).at(j-w_v.at(i).at(1))+w_v.at(i).at(0));
            }
            chmin(dp.at(i+1).at(j),dp.at(i).at(j));
        }
    }
#ifndef DEBUG_ON
    cout << "chk2" << endl;
#endif
    rep(i,sumv+1){
        if(dp.at(n).at(sumv-i)<=w){
            cout<<sumv-i <<endl;
            return 0;
        }
    }
    return 0;
}