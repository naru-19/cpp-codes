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
    n*=2;
    vector<ll>N;
    ll half=pow(n,0.5);
    rep(i,half+1){
        if(i==0)continue;
        if(n%i==0)N.push_back(i),N.push_back(n/i);
    }
    ll ans=0;
    for(auto x:N){
        if((n/x-x+1)%2==0){
            ans++;
        }
    }
    cout<<ans <<endl;
    return 0;
}