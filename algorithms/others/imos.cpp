#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
#define DEBUG_ON
// いもす法 https://imoz.jp/algorithms/imos_method.html


// ABC183D

// 毎分W使える給湯器.N人いてiばんめの人は[Si,Ti)でお湯をPi使う
// 各時刻でWを超えてしまわないかどうか

//入力サンプル
#ifndef DEBUG_ON
4 10 
1 3 5 
2 4 4
3 10 6
2 4 1
#endif

#ifndef DEBUG_ON
6 1000000000
0 200000 999999999
2 20 1
20 200 1
200 2000 1
2000 20000 1
20000 200000 1
#endif


void imos(ll n,ll w){
    ll s,t,p;
    map<ll,ll> data;
    rep(i,n){
        cin>>s>>t>>p;
        data[s]+=p;
        data[t] += p;
    }
    rep(i,n){
        if(i>0){
            data[i]+=data[i-1];
        }
    }
    ll max=0;
    rep(i,n){
        if(max<data[i])max=data[i];
    }
    if(max>w)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
    return;
}

int main(){
    ll n,w;
    cin>>n>>w;
    imos(n,w);
    return 0;
}