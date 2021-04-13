
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long i, n, a;
    cin >> n;
    string mozi;
    long *A;
    long x, y;
    long zero, iti;
    A = new long[n];
    for (i = 0; i < n; i++)
    {
        cin >> mozi;
        if (mozi.compare("AND") == 0)
        {
            // A[i]=0;
            if (i == 0)
            {
                zero = 3;
                iti = 1;
            }
            else
            {
                zero = 2 * zero + iti;
                iti = iti;
            }
        }
        else
        {
            if (i == 0)
            {
                iti = 3;
                zero = 1;
            }
            else
            {
                iti = iti * 2 + zero;
                zero = zero;
            }
        }
    }
    cout << iti;
}
