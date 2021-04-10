
#include <bits/stdc++.h>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    ll n,m,t;
    cin>>n>>m>>t;
    ll a,b;
    ll now=n;
    ll _a=0;
    rep(i,m){
        cin>>a>>b;
        now=now-(a-_a);
        _a=b;
        if(now<=0){
            cout<<"No";
            return 0;
        }
        now+=b-a;
        if(now>=n){
            now=n;
        }
    }
    now=-t+b+now;
    if(now>0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}