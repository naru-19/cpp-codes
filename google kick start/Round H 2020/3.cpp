#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

ll determineY(vector<ll>y,ll n){
    Sort(y);
    ll mi=y[0];
    ll ma=y[n-1];
    ll mincount = 100100100100100;
    for(ll i=mi;i<ma+1;i++){
        ll count=0;
        rep(j,n){
            count+=abs(y[j]-i);
        }
        if(count<mincount){
            mincount=count;
        }
    }
    return mincount;
}

ll continuousX(vector<ll>x,ll n){
    Sort(x);
    ll mi=x[0];
    ll ma=x[n-1];
    ll mincount = 100100100100100;
    for(ll i=mi-n;i<ma+1;i++){
        ll count=0;
        rep(j,n){
            count+=abs(x[j]-(i+j));
        }
        if(count<mincount){
            mincount=count;
        }
    }
    return mincount;
}

void solve(ll time){
    ll ans=0;
    ll n;
    cin>>n;
    vector<ll>x(n);
    vector<ll> y(n);
    rep(i,n){
        cin>>x[i]>>y[i];
    }
    ans+=determineY(y,n);
    ans+=continuousX(x,n);
    cout<<"Case #"<<time+1<<": "<<ans <<endl;
}



int main(){
    ll t;

    cin>>t;
    rep(i,t){
        solve(i);
    }
    return 0;
}
