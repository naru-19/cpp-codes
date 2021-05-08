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
    vector<ll> a(n);

    rep(i,n){
        cin>>a[i];
        if(a[i]<0){
            a[i]%=200;
            a[i]+=200;
        }
        else{
            a[i]%=200;
        }
    }
    Sort(a);
    ll _a=a[0]; 
    ll count=1;
    ll ans=0;
    rep(i,n){
        if(i==0)continue;
        if(a[i]==_a){
            count++;
        }
        else{
            if(count>1){
                ans+=count*(count-1)/2;
            }
            _a=a[i];
            count=1;
        }
    }
    if(count>1){
        ans+=count*(count-1)/2;
    }
    cout<<ans;
}