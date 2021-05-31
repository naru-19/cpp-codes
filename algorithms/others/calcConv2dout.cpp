#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

int main(){
    ll inp;
    cin>>inp;
    ll ks,st,pad;
    cin>>ks>>st>>pad;
    ll out;
    out=(inp-ks+2*pad)/st+1;
    cout<<"outsize="<<out;

}