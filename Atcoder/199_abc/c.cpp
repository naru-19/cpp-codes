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
    ll n;
    string s;
    ll q;
    cin>>n>>s>>q;
    ll t,a,b;
    ll count=0;
    rep(i,q){
        cin>>t>>a>>b;
        if(t==2)count++;
        else{
            if(count%2==0){
                char esc;
                esc=s[a-1];
                s[a-1]=s[b-1];
                s[b-1]=esc;
            }
            else{
                char esc;
                esc = s[(n-1+a)%(2*n)];
                s[(n-1+a)%(2*n)] = s[(n-1+b)%(2*n)];
                s[(n-1+b)%(2*n)] = esc;
            }
        }
    }
    string ans=s;
    if(count%2==1){
        rep(i,n){
            ans[i]=s[n+i];
        }
        rep(i,n){
            ans[n+i]=s[i];
        }
    }
    else{
        ans=s;
    }
    cout<<ans;
}