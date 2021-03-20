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
    cin>>n;
    if(n<=10){
        cout<<0 <<endl;
        return 0;
    }
    ll keta=0;
    ll _n=n;
    while(_n!=0){
        _n=_n/10;
        keta++;
    }
    ll c=0;
    ll t=1;
    while(t>0){
        t=n/pow(10,1+c*2);
        c++;
    }
    c--;
    ll ans=0;
    if(keta%2==1){
        rep(i,c){
            ans+=pow(10,i+1)-pow(10,i);
        }
        cout<<ans <<endl;
        return 0;

    }
    else{
        rep(i,c-1){
            ans+=pow(10,i+1)-pow(10,i);
        }
        ll head=n/pow(10,c);
        ll back=n-head*pow(10,c);
        if(n==pow(10,(c-1)*2+1)){
            cout<<ans;
            return 0;
        }
        if(head<=back){
            ans += head - pow(10, c - 1) + 1;
        }
        else{
            ans += head - pow(10, c - 1) ;
        }
        cout<<ans<<endl;
        return 0;
    }
}