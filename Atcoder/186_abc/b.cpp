
#include <bits/stdc++.h>
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    int h,w;
    cin>>h>>w;
    int A[h*w];
    int min=101;
    rep(i,h){
        rep(j,w){
            cin>>A[i*w+j];
            if(min>A[i*w+j]){
                min=A[i*w+j];
            }
        }
    }
    int sum=0;
    rep(i, h)
    {
        rep(j, w)
        {
            sum+=A[i*w+j]-min;
        }
    }
    cout<<sum;
}