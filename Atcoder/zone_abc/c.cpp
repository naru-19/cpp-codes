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
void bin(ll l, ll r, ll n, vector<vector<ll> > in);
#define DEBUG_ON

    int main()
{
    ll n;
    cin>>n;
    vector<vector<ll> > in(n, vector<ll>(5));
    rep(i,n){
        cin>>in[i][0]>>in[i][1]>>in[i][2]>>in[i][3]>>in[i][4];   
    }
    ll l=0;
    ll r=pow(10,9)+3;
    bin(l,r,n,in);
    
}
void bin(ll l,ll r,ll n,vector<vector<ll> >in){
    while(l+1<r){
        ll mid = (l + r)/2;
        set<int> s;
        rep(i,n){
            int bit=0;
            rep(j,5){
                if(in[i][j]>=mid){
                    bit |=(1<<j);
                }
            }
            s.insert(bit);
        }
        ll flag=0;
        for(int x:s){
            for(int y:s){
                for(int z:s){
                    // 三つ見て31すなわち5桁全部1ならok
                    if((x|y|z)==31){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)break;
            }
            if(flag==1)break;
        }
        if(flag==0){
            r=mid;
        }
        else{
            l=mid;
        }
    }
    cout<<l;
}