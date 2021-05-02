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

#define DEBUG_ON

int main()
{
    double n, d, h;
    cin>>n>>d>>h;
    vector<double> x(n);
    vector<double> y(n);
    double max=1000;
    rep(i,n){
        cin>>x[i]>>y[i];
        if(max>=(h-y[i])/(d-x[i])){
            max=(h-y[i])/(d-x[i]);
            
        }
    }
    double ans=0;
    ans=max*(-1*d)+h;
    if(ans<0){
        cout<<0;
        return 0;
    }
    cout << fixed << setprecision(10) << ans;
}