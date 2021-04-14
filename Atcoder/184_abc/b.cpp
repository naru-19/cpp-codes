
#include <bits/stdc++.h>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{

    ll x,n;
    cin>>n>>x;
    string mozi;
    cin >> mozi;
    rep(i,n){

        if (mozi.compare(i,1, "x") == 0)
        {
            if (x > 0)
            {
                x--;
            }
        }
        else{
                x++;
        }
    }
    cout<<x;
    return 0;
}