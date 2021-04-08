#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define INF 100100100100100100


#define DEBUG_ON

int main()
{
    ll n,x,y,a,b,c,d;
    string s;
    cin>>n;
    if(n%1000==0){
        cout<<0;
        return 0;
    }
    cout<<1000-n%1000;
    return 0;
}