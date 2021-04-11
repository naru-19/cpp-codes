#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ostringstream oss;
    long i, n, x, ak, k;
    ak = 0;
    string suzi;
    cin >> ak >> k;
    long aaa = ak;
    for (x = 0; x < k; x++)
    {
        ostringstream oss;
        oss << ak;
        suzi = oss.str();
        list<long> li;

        n = suzi.length();
        for (i = 0; i < n; i++)
        {
            li.push_back((long)suzi[i] - 48);
        }
        li.sort();
        i = 0;
        aaa = 0;
        

        for (long item : li)
        {
            aaa += (pow(10, i) - pow(10, n - 1 - i)) * item;
            i++;
        }
        ak = aaa;
    }
    cout << aaa<<endl;
}
