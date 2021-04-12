#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define INF 100100100100100100
#define DEBUG_ON

int main()
{
    string n,s;
    cin>>n;
    ll flag=0;
    rep(i,n.length()){
        if(n[i]!=n[n.length()-1-i]){
            flag=1;
        }
    }
    if(flag==0){
        cout<<"Yes"<<endl;
        return 0;
    }
    s=n;
    ll i=1;
    while(i<10){
        s="0"+s;
        ll sl=s.length();
        flag=0;
        rep(i,sl){
            if(s[i]!=s[sl-i-1]){
                flag=1;
            }
        }
        if(flag==0){
            cout<<"Yes";
            return 0;
        }
        i++;
    }
    cout<<"No";

}