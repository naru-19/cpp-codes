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
    string s;
    cin>>s;
    ll c=0;
    ll d=0;
    rep(i,10){
        if (s.compare(i, 1, "o")==0){
            c++;
        }
        else if(s.compare(i, 1, "?")==0){
            d++;
        }
    }
    if(c==4){
        cout<<4*3*2*1;
        return 0;
    }
    ll ans=0;
    if(c==3){
        ans+=36;
        if(d>=1){
            ans+=d*24;
        }
    }
    else if(c==2){
        ans+=14;
        if(d==1){
            ans+=36;
        }
        else if(d>=2){
            ans+=36*d;
            ans+=d*(d-1)/2*24;
        }
    }
    else if(c==1){
        ans+=1;
        if(d==1){
            ans+=14;
        }
        else if(d==2){
            ans+=14*2;
            ans+=36*d*(d-1)/2;
        }
        else if(d>=3){
            ans+=14*d;
            ans+=36*d*(d-1)/2;
            ans+=24*d*(d-1)*(d-2)/6;
        }
    }
    else if(c==0){
        if(d==1){
            ans+=1;
        }
        else if(d==2){
            ans+=2;
            ans+=14;
        }
        else if(d==3){
            ans+=3;
            ans+=3*14;
            ans+=36;
        }
        else{
            ans+=d;
            ans+=d*(d-1)*14/2;
            ans+=d*(d-1)*(d-2)/6*36;
            ans+=d*(d-1)*(d-2)*(d-3);
        }
    }
    cout<<ans;
}