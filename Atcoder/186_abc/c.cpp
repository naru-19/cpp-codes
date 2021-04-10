#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON


ll oct(int n){
    ll s=0;
    ll count=0;
    int i=0;
    while(i<7){
        ll e=pow(8,6-i);
        s=10*s+n/e;
        n%=e;
        i++;
    }
    return s;
}

int main(){
    ll n;
    cin>>n;
    ll ans=0;
    rep(i,n+1){
        if(i==0)continue;
        string s=to_string(oct(i));
        ll flag=0;
        rep(j,s.length()){
            if(s.compare(j,1,"7")==0){
                flag=1;
            }
        }
        s=to_string(i);
        rep(j,s.length()){
            if(s.compare(j,1,"7")==0){
                flag=1;
            }
        }
        if(flag==0)ans++;
    }
    cout<<ans <<endl;
    return 0;
}