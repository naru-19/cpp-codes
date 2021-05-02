#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define INF 100100100100100100


#define DEBUG_ON

int main()
{
    string z;
    cin>>z;
    ll count=0;
    rep(i,12){
        if (z.compare(i, 1, "Z") == 0 && z.compare(i+1, 1, "O") == 0 && z.compare(i+2, 1, "N") == 0 &&z.compare(i+3,1,"e")==0)
        {
            count++;
        }
    }    
    cout<<count;
}