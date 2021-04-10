
#include <bits/stdc++.h>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = min(a, b);
    c = min(c, d);
    d = min(a, c);
    cout << d;
}