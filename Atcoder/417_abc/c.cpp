#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

int main(){
    ll a,b;
    cin>>a>>b;
    map<ll,ll>count;
    ll ans;
    rep(i,pow(b,0.5)+1){
        ll c=0;
        if(i==0 )continue;
        for(int j=a;j<=b;j++){
            if(j%i==0){
                c++;
                count[j/i]++;
            }
        }
        if(c>=2)ans=i;
    }
    for(auto x:count){
        if(x.second>=2){
            if(ans<x.first)ans=x.first;
        }
    }
    cout<<ans;
}