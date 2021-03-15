#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;

#define DEBUG_ON

int main()
{
    ll n, m, q;
    cin >> n >> m >> q;

    vector<ll> w(n);
    vector<ll> v(n);
    vector<vector<ll> > w_v(n, vector<ll>(2));
    vector<ll> x(m);
    vector<ll> _x(m);
    vector<ll> qu_l(q);
    vector<ll> qu_r(q);
    rep(i, n){
        cin >> w_v[i][1] >> w_v[i][0];
    }
    rep(i, m){
        cin >> x[i];
    }
    rep(i, q){
        cin >> qu_l[i] >> qu_r[i];
    }
    Sort(w_v);
    rep(i, n){
        ll swap = w_v[i][0];
        w_v[i][0] = w_v[i][1];
        w_v[i][1] = swap;
    }
    ll ans = 0;
    rep(i, q){
        ans = 0;
        _x = x;
        for(int j=qu_l[i]-1;j<qu_r[i];j++){
            _x[j]=0;
        }
        
        Sort(_x);
#ifndef DEBUG_ON
        rep(t,m){
            cout<<_x[t]<<" ";
        }
        cout<<""<<endl;
#endif
        
        rep(j,n){
            ll k=0;
            while(1){
                if(w_v[n-j-1][0]<=_x[k]){
                    ans+=w_v[n-j-1][1];
                    _x[k]=0;
                    break;
                }
                k++;
                if(k==m){
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}