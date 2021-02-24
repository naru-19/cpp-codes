#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)

// 入力は n a_n a_n-1...a_0 x(n次多項式 x^nの係数...x^0の係数 xの値)
// 入力形式はint

int horner(int A[],int n,int x);
int main(){
    int n;
    int x,y;
    cout << "input n a_n a_(n-1)...a_0 x>";
    cin>>n;
    cout << "" << endl;
    int *A;
    n++;
    A = new int(n);
    rep(i,n){
        cin>>A[i];
    }
    cin>>x;
    y = horner(A,n,x);
    cout<<"answer="<<y<<endl;
}

int horner(int A[], int n,int x){
    int y;
    y=0;
    rep(i,n){
        y=y*x+A[i];
    }
    return y;
}