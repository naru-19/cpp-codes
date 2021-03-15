#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;

#define DEBUG_ON

int main()
{
    ll n;
    cin>>n;
    ll count=0;
    ll copy=n;
    ll ans=0;
    while(copy/1000>0){
        count++;
        copy/=1000;
    }
    if(count==0){
        cout<<0;
        return 0;
    }
    for(int i=0;i<count;i++){
        if(i==0)continue;
        ans+=(pow(1000,i+1)-pow(1000,i))*i;
    }

    ans+=(n-pow(1000,count)+1)*count;
    cout<<ans;
    return 0;

}