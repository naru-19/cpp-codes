#include <bits/stdc++.h>
#include <random>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

int main(){
    ll n;
    cout<<"input size >";
    cin>>n;
    random_device rnd;
    rep(i,n){
        cout<<rnd()%10000<<" ";
    }
    cout<<""<<endl;
}