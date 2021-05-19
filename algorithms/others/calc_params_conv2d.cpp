#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON
ll outsize(ll in,ll st,ll pad,ll ks){
    return (in+2*pad-ks)/st+1;
}

void decopri(string txt){
    ll st=100;
    rep(i,st){
        cout<<"☆";
    }
    cout << "" << endl;
    rep(i,(st-txt.length())/2){
        cout << " ";
    }
    cout<<txt<<endl;
    rep(i,st){
        cout<<"☆";
    }
    cout<<""<<endl;
}
int main(){
    // 欲しいoutsize
    ll o_p;
    cout<<"欲しいoutsize >";
    cin>>o_p;
    // input size
    cout<<"input size >";
    ll in;
    cin>>in;
    ll out;
    string txt="欲しいサイズ ";
    ostringstream oss;
    oss<<o_p;
    txt+=oss.str();
    txt+=",　入力サイズ ";
    ostringstream oss2;
    oss2 << in;
    txt += oss2.str();
    decopri(txt);
    rep(i,10){
        if(i==0)continue;
        rep(j,10){
            rep(k,10){
                out=outsize(in,i,j,k);
                if(out>1&&out<=28){
                    if(out==o_p)
                    cout<<"kernel size "<<k<<",stride "<<i<<",padding "<<j<<endl;
                }
            }
        }
    }


}