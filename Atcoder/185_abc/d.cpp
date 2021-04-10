
#include <bits/stdc++.h>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    ll n, m, l;
    cin >> n >> m;
    if (m == 0)
    {
        cout << 1;
        return 0;
    }
    vector<ll> a(m);
    rep(i, m)
    {
        cin >> l;
        a.at(i) = l - 1;
    }
    sort(a.begin(), a.end());
    vector<ll> haba(m + 1);
    rep(i, m)
    {
        if (i == 0)
        {
            haba.at(0) = a.at(0) - 0;
        }
        else
        {
            haba.at(i) = a.at(i) - a.at(i - 1) - 1;
        }
    }
    haba.at(m) = n - a.at(m - 1) - 1;
    sort(haba.begin(), haba.end());
    ll min;
    min = 1000000000;
    int i = 0;
    while (1)
    {

        if (haba.at(i) != 0)
        {
            min = haba.at(i);
            break;
        }
        i++;
        if (i == m + 1)
        {
            cout << 0;
            return 0;
        }
    }

    ll count;
    count = 0;

    rep(i, m + 1)
    {
        ll ha = haba.at(i);
        if (ha % min == 0)
        {
            count += ha / min;
        }
        else
        {
            count += ha / min + 1;
        }
    }
    cout << count;
}