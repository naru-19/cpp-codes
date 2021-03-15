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
    double kitai;
    kitai=0;
    rep(i,n){
        if(i==n-1){
            continue;
        }
        
        #ifndef DEBUG_ON
        cout<<n<<":"<<n-i-1 <<endl;
        #endif
        kitai+=double(n)/double(n-i-1);
    }
    cout << fixed << setprecision(10) << kitai;
    return 0;


}