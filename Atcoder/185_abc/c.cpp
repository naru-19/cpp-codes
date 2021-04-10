#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

int main()
{ 
    ll l;
    cin>>l;
    l--;
    ll ans=1;
    rep(i,11){
        ans*=l-10+i;
        ans/=(i+1);
    }
    cout<<ans<<endl;
    return 0;
}