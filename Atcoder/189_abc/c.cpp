
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a;
    cin >> n ;
    int *A;
    A = new int[n];
    for(i=0;i<n;i++){
        cin>>a;
        A[i]=a;
    }
    int l,r,j,min,max,t;
    max=0;
    
    int win;
    for(l=0;l<n;l++){
        min = 100000;
        for(win=1;win<n-l+1;win++){
            if (min > A[l + win - 1]){
                min = A[l + win - 1];
            }
            if(max<min*win){
                max=min*win;
            }
        }
    }
    cout<<max;
    return 0;
}

