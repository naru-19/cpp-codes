#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON


void solve(ll time){
    string s;
    ll n,k;
    cin >> n >> k;
    cin >> s;
    ll score=0;
    rep(i,n/2){
        if(s[i]!=s[n-1-i]){
            score++;
        }
    }
    ll ans=0;
    ans=abs(score-k);
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
