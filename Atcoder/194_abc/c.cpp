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
    vector<int>a(n);
    ll sum=0;
    ll summ=0;
    rep(i,n){
     cin>>a.at(i);   
     sum+=a.at(i);
     summ += a.at(i) * a.at(i);

    }
    summ*=n-1;
    ll _sum=0;
    rep(i,n){
        _sum+=(sum-a.at(i))*a.at(i);
        sum=sum-a.at(i);
    }
    cout<<summ-2*_sum;
    return 0;



}