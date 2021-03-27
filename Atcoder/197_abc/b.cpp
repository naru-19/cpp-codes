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
    ll h,w,x,y;
    cin>>h>>w>>x>>y;
    vector<string>s(h);
    rep(i,h){
        cin>>s[i];
    }
    ll ans=0;
    ll count=0;
    ll flag=0;
    rep(i,w){
        if(i<y-1){
            if(s[x-1].compare(i,1,".")==0){
                count++;
            }
            else{
                count=0;
            }
        }
        else if(i==y-1){
            ans+=count;
            count=0;
        }
        else{
            if(flag==0){
                if(s[x-1].compare(i,1,".")==0){
                    count++;
                }
                else{
                    flag=1;
                }
            }
        }
    }
    ans += count;
    count=0;
    flag=0;
    rep(i,h){
        if(i<x-1){
            if(s[i].compare(y-1,1,".")==0){
                count++;
            }
            else{
                count=0;
            }
        }
        else if(i==x-1){
            ans+=count;
            count=0;
        }
        else{
            if(flag==0){
                if(s[i].compare(y-1,1,".")==0){
                    count++;
                }
                else{
                    
                    
                    flag=1;
                }
            }
        }
    }
    ans += count;
    if(s[x-1].compare(y-1,1,".")==0){
        ans++;
    }
    cout<<ans;
    return 0;
}