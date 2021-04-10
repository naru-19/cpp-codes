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
    ll a,b,c,d,x,y,n;
    cin>>a>>b>>c;
    if(c==0){
        if(a<b+1){
            cout<<"Aoki";
        }
        else{
            cout<<"Takahashi";
        }
    }
    else{
        if(a+1<=b){
            cout<<"Aoki";
        }
        else{
            cout<<"Takahashi";
        }
    }
}