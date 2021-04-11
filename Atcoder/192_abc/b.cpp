
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int i,n, x;
    string mozi;
    cin >> mozi;
    n= mozi.length();
    x=0;
    for(i=0;i<n;i++){
        if(islower(mozi[i])&&i%2==0){
            x+=0;
        }
        else if (isupper(mozi[i]) && i % 2 == 1){
            x+=0;
        }
        else{
            x=1;
        }
    }
    if(x>=1){
        cout<<"No";
    }
    else{
        cout << "Yes";
    }
}
