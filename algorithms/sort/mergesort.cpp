#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

//  (ex)
// 5 4 3 2 1 0 → l(5,4,3),r(2 1 0)
// 5 4 2 →　l(5),r(4 3) 4 3→l(4),r(3) →merge l(5) r(3 4)→merge l(3 4 5)
// 2 1 0 も同様の処理

void merge(vector<int> &a, int l, int mid, int r)
{
    // l()とr()をくっつけてソートする。
    int i, j; //lとrの中身の様子

    int k; //bがどこまでうまったか
    vector<int> b(r - l + 1);

    //初期値
    i = l;
    j = mid + 1;
    k = 0;
    while (i <= mid && j <= r){
        if (a.at(i) > a.at(j)){
            b.at(k) = a.at(j);
            j++;
        }
        else{
            b.at(k) = a.at(i);
            i++;
        }
        k++;
    }
    if (i > mid){
        while (k != r - l+1){
            b.at(k) = a.at(j);

            k++;
            j++;
        }
    }
    else{
        while (k != r - l+1){
            b.at(k) = a.at(i);
            k++;
            i++;
        }
    }
    rep(i, r - l + 1){
        a[l + i] = b.at(i);
    }
}

// まず分割して整列
void merge_sort(vector<int> &a, int l, int r){   
    int mid;
    if (l == r)
        return;
    mid = (l + r) / 2;
    merge_sort(a, l, mid);
    merge_sort(a, mid + 1, r);
    merge(a, l, mid, r);
}

int main(){
    cout<<"input size >";
    int n;
    cin >>n;
    vector<int> a(n);
    cout<<"input nums >";
    rep(i,n){
        cin>>a.at(i);
    }
    merge_sort(a ,0,n-1);
    cout<<"sorted"<<endl;
    rep(i, n)
    {
        cout << a.at(i)<<" ";
    }
    cout<<""<<endl;
}
