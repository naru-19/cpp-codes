#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define INF 100100100100100100
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

#define DEBUG_ON

int main()
{
    ll h,w,k;
    cin>>h>>w>>k;
    vector<ll>c(h*w);
    vector<ll>c_copy(h*w);
    ll n=h*w;
    ll ans=0;
    rep(i,h){
        string s;
        cin>>s;
        rep(j,w){
            if(s.compare(j,1,".")==0){
                c[i*w+j]=0;
            }
            else{
                c[i*w+j]=1;
            }
        }
    }
    ll line=h+w;
    for(int bit=0;bit<(1<<line);bit++){
        
        rep(i,n){
            c_copy[i]=c[i];
        }
        for (int i = 0; i < line; ++i) {
            if (bit & (1<<i)) { 
                if(i>=h){
                    rep(j,h){
                        c_copy[j*w+i-h]=0;
                    }
                }
                else{
                    rep(j,w){
                        c_copy[i*w+j]=0;
                    }
                }
            }            
        }
        ll count = 0;
        rep(i,n){
            if(c_copy[i]==1){
                count++;
            }
        }
        if(count==k)ans++;
    }
    cout<<ans;

}