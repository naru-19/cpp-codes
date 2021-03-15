#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

int main(){
    ll a,b;
    cin>>a>>b;
    if(a+b>=15&&b>=8){
        cout<<1;
        return 0;
    }
    if(a+b>=10&b>=3){
    cout<<2;
    return 0;
    }
    if ( a+b >= 3)
    {
        cout<<3;
        return 0;
    }
    cout<<4;
    return 0;
}