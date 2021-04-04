#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON


void solve(ll time){
    ll ans=0;
    ll l,r;
    cin>>l>>r;
    
    for(ll i=l;i<r+1;i++){
        ll flag=0;
        ostringstream oss;
        string s;
        oss << i << flush;
        s = oss.str();
        ll len = s.length();
        for(ll j=0;j<len;j++){
            if(j%2==0){
                if((s[j]-'0')%2==0){
                    flag=1;
                }
            }
            else{
                if((s[j]-'0')%2==1){
                    flag=1;
                }
            }
        }
        if(flag==0){
            ans++;
        }
    }
    
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
