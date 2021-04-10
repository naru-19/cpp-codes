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
    vector<ll>a(m);
    vector<ll> b(m);
    rep(i,m){
        cin>>a[i]>>b[i];
    }
    ll k;
    cin>>k;
    vector<ll> c(k);
    vector<ll> d(k);
    rep(i,k){
        cin>>c[i]>>d[i];
    }
    ll ans=0;
    for(int bit=0;bit<(1<<k);bit++){
        ll count=0;
        map<ll, ll> ball;
        for (int i = 0; i <k; ++i){
            if(bit & (1<<i)){
                ball[c[i]]=1;
            }
            else{
                ball[d[i]]=1;
            }
        }
        rep(i,m){
            if(ball[a[i]]==1&&ball[b[i]]==1){
                count++;
            }
        }
        if(count>ans)ans=count;
    }
    cout<<ans <<endl;
    return 0;
}