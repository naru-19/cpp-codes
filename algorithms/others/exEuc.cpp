#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll=long long;


// ax+by=gcd(a,b)を満たすx,yを探す

ll exteuc(ll a, ll b, ll &x, ll &y)
{
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }
    ll d = exteuc(b, a % b, y, x);
    y -= a / b * x;
    cout<<a<<":"<<b<<":"<<x<<":"<<y <<endl;
    return d;
}

int main(){
    ll a,b,x,y;
    cin>>a>>b;
    ll esc;
    if(a<b){
        a=esc;
        a=b;
        b=esc;
    }
    exteuc(a, b, x, y);
    cout<<"ans:";
    cout << x << ", " << y << endl;

}