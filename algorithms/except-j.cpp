#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

// こんなとき使える
// j=0の時j=1とj=2の時の値を使いたい、j=1の時j=0とj=2の時の値を使いたい、j=2の時j=0とj=1の時の値を使いたい,みたいな時
// DPまとめコンテストC参考
int main(){
    ll n=5;
    vector<vector<ll> >num(n, vector<ll>(3));
    vector<vector<ll> >dp(n, vector<ll>(3));
    cout<<"inputs"<<endl;
    rep(i,n){
        rep(j,3){
            // 適当に代入
            num.at(i).at(j)=i*j+i+j;
            cout<<num.at(i).at(j)<<" ";
            dp.at(i).at(j)=0;
        }
        cout<<""<<endl;
    }
    rep(i,n){
        if(i==0){
            rep(j,3){
                dp.at(i).at(j)=num.at(i).at(j);
            }
        }
        else{
            rep(j,3){
                // こう書くことでj以外の値を取れる。
                dp.at(i).at(j)=max(dp.at(i-1).at((1+j)%3),dp.at(i-1).at((2+j)%3))+num.at(i).at(j);
            }
        }
    }
    ll ans=0;
    ans=max(dp.at(n-1).at(0),dp.at(n-1).at(1));
    ans=max(ans,dp.at(n-1).at(2));
    cout<<ans<<endl;
    return 0;
}


