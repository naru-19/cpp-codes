#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;

#define DEBUG_ON

int main()
{
    ll a,b,w;
    cin>>a>>b>>w;
    ll x;
    x=(1000*w)/a;
    if(b*x<1000*w&&(1000*w)%a!=0){
        cout << "UNSATISFIABLE";
        return 0;
    }
    if(a==b){
        cout<<(1000*w)/a<<" "<<(1000*w)/a;
        return 0;
    }
    ll amari=0;
    amari=(w*1000)%a;
    ll max=w*1000/a;
    if(amari%(b-a)==0){
        if(max>=amari/(b-a)){
            max=max;
        }
        else{
            max=amari/(b-a);
        }
    }
    else{
        if(max>=amari/(b-a)+1){
            max = max;
        }
        else{
            max=amari/(b-a)+1;
        }
    }
    ll min=0;
    if((w*1000)%b==0){
        min=(w*1000)/b;
    }    
    else{
        min = (w * 1000) / b+1;
    }

    cout<<min<<" " << max;
    return 0;
}