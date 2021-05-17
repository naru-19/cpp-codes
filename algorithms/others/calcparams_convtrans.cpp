#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

ll outsize(ll in,ll st,ll pad,ll ks){
    return (in-1)*st-2*pad+ks;
}

void decopri(string txt){
    rep(i,50){
        cout<<"☆";
    }
    cout<<""<<endl;
    cout<<txt<<endl;
    rep(i,50){
        cout<<"☆";
    }
    cout<<""<<endl;
}

// pycharmのparam計算用
int main(){

    ll pad,ks,stride;
    decopri("convTrans2d");
    ll in=8;
    ll p =16;
    ll out;
    rep(i,10){
        rep(j,10){
            rep(k,10){
                out=outsize(in,i,j,k);
                if(out>1&&out<=28){
                    if(out==p)
                    cout<<out<<":kernel size "<<k<<",stride "<<i<<",padding "<<j<<endl;
                }
            }
        }
    }
}