#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

// 隣のブロックとの差を見る
ll compare_adjacent(ll tmp,ll adjacent,ll &flag){
    if(tmp>adjacent)return 0;
    if(adjacent-tmp>1){
        flag=1;
        return adjacent-tmp-1;
    }
    else{
        return 0;
    }
}

void box_update(vector<ll>&box,ll &flag,ll i,ll j,ll r,ll c){
    ll tmp=i*c+j;
    vector<ll>adjacent(4);
    // 端っこの辺に注意
    if(j+1<c){
        adjacent[0]=i*c+j+1;
    }
    else{
        adjacent[0]=i*c+j;
    }
    if(j-1>=0){
        adjacent[1]=i*c+j-1;
    }
    else{
        adjacent[1]=i*c+j;
    }
    if(i+1<r){
        adjacent[2]=(i+1)*c+j;
    }
    else{
        adjacent[2]=i*c+j;
    }
    if(i-1>=0){
        adjacent[3]=(i-1)*c+j;
    }
    else{
        adjacent[3]=i*c+j;
    }
    rep(k,4){
        if(adjacent[k]<r*c&&adjacent[k]>=0){
            box[tmp]+=compare_adjacent(box[tmp],box[adjacent[k]],flag);
        }
    }
}

ll addbox(vector<ll>& box,ll r,ll c,ll &flag){
    ll ans=0;
    ll adjacent;
    flag=0;
    ll _box=0;
    rep(i,r)rep(j,c){
        _box=box[i*c+j];
        box_update(box,flag,i,j,r,c);
        ans+=box[i*c+j]-_box;
    }
    return ans;
}

void solve(ll time){
    ll r,c;
    cin>>r>>c;
    vector<ll>box(r*c);
    ll flag=0;
    ll ans=0;
    rep(i,r){
        rep(j,c){
            cin>>box[i*c+j];
        }
    }
    do{
        ans+=addbox(box,r,c,flag);
    } while (flag==1);
    cout << "Case #" << time + 1 << ": " << ans << endl;
}

int main(){
    ll t;
    cin>>t;
    rep(i,t){
        solve(i);
    }
    return 0;
}