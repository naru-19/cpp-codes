#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON


void solve(ll time){
    ll ans=0;
    ll n,k,s;
    cin>>n>>k>>s;
    ans=min(k-1+k-s+n-s+1,1+k-1+n);

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
