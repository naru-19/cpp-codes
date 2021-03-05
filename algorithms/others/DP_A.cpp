#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON


//atcoder EDPC A

int main(){
    ll n;
    cin>>n;
    vector<ll>h(n);
    vector<ll> dp(n);
    rep(i,n){
        cin>>h.at(i);
        if(i>=2){
            dp.at(i)=min(dp.at(i-1)+abs(h.at(i)-h.at(i-1)),dp.at(i-2)+abs(h.at(i)-h.at(i-2)));
        }
        if(i==1){
            dp.at(i)=abs(h.at(1)-h.at(0));
        }
    }
    cout<<dp.at(n-1);


}