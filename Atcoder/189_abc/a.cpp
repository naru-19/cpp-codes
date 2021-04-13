
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string mozi;
    
    cin >> mozi;
    string mozi_1, mozi_2, mozi_3;
    mozi_1=mozi[0];
    mozi_2 = mozi[1];
    mozi_3 = mozi[2];
    if (mozi_1.compare(mozi_2) == 0 && mozi_1.compare(mozi_3) == 0)
    {
        cout << "Won"
             << "";
        }
    else{
        cout << "Lost" << "";
    }
}
