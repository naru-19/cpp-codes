#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;

#define DEBUG_ON
#define INF 10001001011
ll Ans(ll l, ll _l)
{
    ll ans = 0;
    for (ll w = 2; w <= l; w++)
    {
        if (w * 2 <= _l)
            ans++;
    }
    for (ll w = 2; w <= _l; w++)
    {
        if (w * 2 <= l)
            ans++;
    }
    return ans;
}
ll calc(vector<ll> grid, vector<ll> len, ll i, ll j, ll c)
{
    ll l_l, l_r;
    l_l = 1;
    l_r = 1;
    ll ans = 0;
    if (i % 2 == 0)
        return 0;
    if (len[i] == INF)
        return 0;
    for (ll v = len[i - 1]; v < len[i]; v++)
    {
        ll tmp = 1;
        l_l = 1;
        l_r = 1;
        while (tmp <= j)
        {
            if (grid[v * c + j - tmp] == 1)
            {
                l_l++;
                tmp++;
            }
            else
                break;
        }
        tmp = 1;
        while (tmp <= c - j - 1)
        {
            if (grid[v * c + j + tmp] == 1)
            {
                l_r++;
                tmp++;
            }
            else
                break;
        }
        if (l_l != 1 && len[i] - len[i - 1] > 1)
        {
            ans += Ans(v - len[i - 1] + 1, l_l);
            ans += Ans(len[i] - v, l_l);
        }
        if (l_r != 1 && len[i] - len[i - 1] > 1)
        {
            ans += Ans(v - len[i - 1] + 1, l_r);
            ans += Ans(len[i] - v, l_r);
        }
    }
    return ans;
}
void solve(ll time)
{
    ll r, c;
    cin >> r >> c;
    ll ans = 0;
    vector<ll> grid(r * c);
    rep(i, r) rep(j, c) cin >> grid[i * c + j];
    rep(j, c)
    {
        ll l = 0;
        vector<ll> len(r);
        rep(i, r)
        {
            len[i] = INF;
        }
        ll flag = 1;
        rep(i, r)
        {
            if (grid[i * c + j] == 1)
            {
                if (flag == 1)
                {
                    len[l] = i;
                    flag = 0;
                }
            }
            else
            {
                if (flag == 0)
                {
                    l++;
                    len[l] = i;
                    l++;
                    flag = 1;
                }
            }
        }
        if (grid[r * c - c + j] == 1)
        {
            l++;
            len[l] = r;
        }
        rep(i, l + 1)
        {
            ans += calc(grid, len, i, j, c);
        }
    }
    cout << "Case #" << time + 1 << ": " << ans << endl;
}
int main()
{
    ll t;
    cin >> t;
    rep(i, t)
    {
        solve(i);
    }
}
