#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define INF 100100100100100100


#define DEBUG_ON

int main()
{
    ll n;
    cin>>n;
    map<string,ll>s;
    rep(i,n){
        string in;
        cin>>in;
        s[in]+=1;
    }
    cout<<"AC x "<<s["AC"]<<endl;
    cout<<"WA x "<<s["WA"]<<endl;
    cout<<"TLE x "<<s["TLE"]<<endl;
    cout<<"RE x "<<s["RE"]<<endl;
}