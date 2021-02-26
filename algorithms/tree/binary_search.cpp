#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

// n個の昇順データに対してあるデータdのindexを取得する。
#define MAX 99999
int binary(int A[],int n,int d);
int main(){
    int n;
    int *A;
    int d;
    int ind;
    A=new int(n);
    cout<<"input n  >";
    cin>>n;
    cout << "input data  >";
    rep(i,n){
        cin>>A[i];
    }
    cout << "input d  >";
    cin>>d;
    ind=binary(A,n,d);
    if(ind==MAX)cout<<"cant find "<<d<<endl;
    else cout<<"index:"<<ind<<endl;
}
int binary(int A[], int n, int d){
    int l,r;
    int mid;
    l=0;
    r=n-1;
    if(A[r]==d)return r;
    while(r>l+1){
        mid=(r+l)/2;
        if(A[mid]<=d){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    if(A[l]==d)return l;
    else return MAX;
    
}