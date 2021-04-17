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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n);
    vector<ll> b(m);
    map<ll,ll>unia;
    map<ll,ll>unib;
    vector<ll>ans(1000,INF);
    rep(i,n){
        cin>>a[i];
        unia[a[i]]=1;
    }
    ll k=0;
    rep(i,m){
        cin>>b[i];
        if(unia[b[i]]==0){
            ans[k]=b[i];
            k++;
        }
        else{
            unia[b[i]]=0;
        }
    }
    for(auto x:unia){
        if(x.second==1){
            ans[k]=x.first;
            k++;
        }
    }
    Sort(ans);
    rep(i,k){
        cout<<ans[i]<<" ";
    }

}