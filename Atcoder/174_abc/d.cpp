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
    string C;
    cin>>C;
    vector<ll>c(n);
    ll count=0;
    rep(i,n){
        if(C.compare(i,1,"R")==0){
            c[i]=1;
            count++;
        }
        else{
            c[i]=0;
        }
    }
    ll wl=0;
    rep(i,count){
        if(c[i]==0){
            wl++;
        }
    }
    cout<<wl <<endl;

}