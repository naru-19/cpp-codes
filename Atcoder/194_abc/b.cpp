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
    vector<ll>a(n);
    vector<ll> _a(n);
    vector<ll> _b(n);
    vector<ll> b(n);
    rep(i,n){
        cin>>a.at(i)>>b.at(i);
        _a.at(i) = a.at(i);
        _b.at(i) = b.at(i);
    }

    ll min_ind_a;
    ll min_ind_b;
    ll min_a=10010101;
    ll min_b = 10010101;

    rep(i,n){
        if(min_a>a.at(i)){
            min_a=a.at(i);
            min_ind_a=i;
        }
        if (min_b> b.at(i))
        {
            min_b = b.at(i);
            min_ind_b = i;
        }
    }

    if(min_ind_a==min_ind_b){
        
        Sort(a);
        Sort(b);
        if (min_a + min_b < a.at(1) && min_a + min_b < b.at(1)){
            cout << min_a + min_b ;
            return 0;
        }
        if(a.at(0)>b.at(1)){
            cout<<a.at(0);
            return 0;
        }
        else if(b.at(0)>a.at(1)){
            cout<<b.at(0);
            return 0;
        }
            cout << min(a.at(1), b.at(1));
            return 0;
    }


    else{
        cout<<max(min_a,min_b);
        return 0;
    }

}