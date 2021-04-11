#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON


ll bin(ll m,string x,ll d){
    ll l=d;
    ll r=m+1;
    ll n=x.length();
    while(l+1<r){
        ll Xn=0;
        ll mid=(l+r)/2;
        ll i=0;
        // 超えた時点で終了させる
        while(i<n){
            ll keta=0;
            ll _mid=mid;
            while(_mid>0){
                _mid/=10;
                keta++;
            }
            if(Xn>pow(10,18-keta+1)){
                r = mid;
                break;
            }
            Xn=Xn*mid+(x[i]-'0');
            if(Xn>m){r=mid;break;}
            i++;
        }
        if(i==n){
            l=mid;
        }
    }
    return l;
}
int main()
{
    string x;
    ll m;
    cin>>x>>m;
    ll d=0;
    ll n=x.length();
    if(n==1){
        if((x[0]-'0')<=m){
            cout<<1;
            return 0;
        }
        else{
            cout<<0;
            return 0;
        }
    }
    rep(i,n){
        if((x[i]-'0')>d){
            d=x[i]-'0';
        }
    } 
    ll ans=bin(m,x,d);
    cout<<ans-d<<endl;
    return 0;
}
