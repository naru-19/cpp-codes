#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

//正確にはnCrの列挙ではなく
// if(n-r<r)nCn-rの列挙
// else nCrの列挙

void printVector(const vector<int>vec,ll r,vector<int>&_nums) {
    int i=0;
    vector<int>ans(r);
    for (int value : vec) {
        if(i<r){
            ans.at(i)=value;
            i++;
        }
    }
    int flag=0;
    rep(i,r){
        if(ans.at(i)==_nums.at(i)){
            continue;
        }
        else{
            flag=1;
        }
    }
    if(flag==1){
        rep(i,r){
            cout<<ans.at(i)<<" ";
            _nums.at(i)=ans.at(i);
        }
        cout << endl;
    }
}
void calc(ll n,ll r){
    vector<int>nums(n);
    rep(i,n){
        nums.at(i)=i;
    }
    vector<int>_nums(r);
    rep(i,r){
        _nums.at(i)=0;
    }
    do {
        printVector(nums,r,_nums);
    } while (next_permutation(nums.begin(), nums.end()));
}
int main(){
    ll n,r;
    cin>>n>>r;
    calc(n,r);
}