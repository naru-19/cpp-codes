
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int v, p;
    int now;
    now = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> v >> p;
        now += v * p;
        if (now > x * 100)
        {
            cout << i + 1 << "";
            return 0;
        }
    }
    cout << "-1"
         << "";
}
