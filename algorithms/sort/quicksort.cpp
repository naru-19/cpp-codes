#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;

#define DEBUG_ON

// 入力は 
// n 
// x_1 x_2 ...... x_n  (空白区切り)
// の形式で、出力は空白区切りでsortされたもの


ll partition(vector<ll> &num,ll pivot,ll left,ll right){
    ll esc;
    esc=num.at(pivot);
    num.at(pivot)=num.at(right);
    num.at(right)=esc;
    ll l=left;
    // 右端の左隣
    ll r=right-1;
    while(1){
        while(num.at(l)<num.at(right))l=l+1;//右へずれてく(はみ出ないように注意)
        while(l<=r&&num.at(r)>=num.at(right))r=r-1;
        if(l<r){
            esc= num.at(l);
            num.at(l) = num.at(r);
            num.at(r) = esc;
        }
        else break;
    }
    esc= num.at(l);
    num.at(l) = num.at(right);
    num.at(right) = esc;
    return l;
}

void quick_sort(vector<ll> &num,ll left,ll right){
    if(left<right){
        ll pivot=(left+right)/2;
        ll p=partition(num,pivot,left,right);
        quick_sort(num,left,p-1);
        quick_sort(num, p+1, right);
    }
}
int main()
{
    // input size
    ll n;
    cout<<"input size >";
    cin>> n;
    cout<<"input nums >";
    vector<ll>num(n);
    rep(i,n){
        cin>>num.at(i);
    }
    clock_t start = clock();
    quick_sort(num,0,n-1);
    clock_t end = clock();
    cout<<"sorted: ";
    rep(i,n){
        cout<<num.at(i)<<" ";
    }
    cout<<""<<endl;
    cout<<"time: "<<end-start<<"[ms]"<<endl;
}