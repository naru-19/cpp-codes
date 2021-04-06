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
    ll k;
    cin>>k;
    ll _k=k;
    ll keta=0;
    while(_k>0){
        _k/=10;
        keta++;
    }
    ll _amari=0;
    ll num=0;
    ll ans=keta;
    rep(i,keta){
        num=10*num+7;
    }
    _amari=num%k;
    ll amari=num;
    while(1){
        if(amari%k==0){
            cout<<ans <<endl;
            return 0;
        }
        amari%=k;
        amari=amari*10+7;
        ans++;
        if(_amari==amari%k){
            cout<<-1 <<endl;
            return 0;
        }
    }
}