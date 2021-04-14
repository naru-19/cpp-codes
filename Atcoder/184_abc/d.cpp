
#include <bits/stdc++.h>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;
using d=double;
int main()
{

    vector<int>a(3);
    cin >> a.at(0) >> a.at(1) >> a.at(2);
    sort(a.begin(),a.end());
    int n=0;
    rep(i,a.size()){
        n+=99-a.at(i);
    }
    for(int i=99-a.at(2);i<n+1;i++){
        cout<<i+1;
    }


}
