#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

int main(){
    ll n;
    cin>>n;
    ll r_n=pow(n,0.5);
    int flag=0;
    map<ll,ll>prime_num;
    rep(i,r_n){
        
        cout<<i <<endl;
        if(i==1||i==0){
            continue;
        }
        if(n%i==0){
            cout << n << " is not prime number"<<endl;
            cout<<i<<" divides "<<n <<endl;
            return 0;
        }
    }
    if(flag==0){
        cout<< n<<" is prime number"<<endl;
        return 0;
    }
    return 0;
}