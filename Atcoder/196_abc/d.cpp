#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON
ll h,w,a,b;
bool used[16][16];

ll dfs(ll i,ll j,ll a ,ll b){
    //a<0,b<0になっちゃったら終わり
    if(a<0||b<0)return 0;
    if(j==w)j=0,i++;
    //終了条件に注意
    if(i==h)return 1;//allok;
    //使用済みなら終わり
    if(used[i][j])return dfs(i,j+1,a,b);
    used[i][j]=true;
    ll res=0;
    //hanjoを置く
    res+=dfs(i,j+1,a,b-1);
    // 横に置く
    if(j+1<w&& !used[i][j+1]){
        used[i][j+1]=true;
        res+=dfs(i,j+1,a-1,b);
        //元に戻す。今見てるマスからの探索のが終われば戻してあげる
        used[i][j+1]=false;
    }
    // 縦に置く
    if(i+1<h&& !used[i+1][j]){
        used[i+1][j]=true;
        res+=dfs(i,j+1,a-1,b);
        //元に戻す。今見てるマスからの探索のが終われば戻してあげる
        used[i+1][j]=false;
    }
    used[i][j]=false;
    return res;
}

int main(){
    cin>>h>>w>>a>>b;
    // どのますをみているか、残りのそれぞれの枚数が引数。
    
    cout<<dfs(0,0,a,b)<<endl;
    return 0;
}

