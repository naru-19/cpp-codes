#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
// 2入力の最大公約数を求める
int euclidean(int n,int m);
int main(){
    int n,m;
    int gcd;
    cout<<"input nums > ";
    cin>>n>>m;
    gcd=euclidean(n,m);
    cout <<gcd<<endl;
}


int euclidean(int n,int m){
    int esc;
    int r;
    if (n < m)
    {
        m = esc;
        m = n;
        n = esc;
    }
    else if (n == m)
    {
        return n;
    }
    r=100;
    while(r!=0){
        r=n%m;
        n=m;
        m=r;
    }
    return n;
}