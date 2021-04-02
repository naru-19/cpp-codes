#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(),a.end())
using ll = long long;

#define DEBUG_ON

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


ll addbox(vector<ll>& box,ll r,ll c,ll &flag){
    ll ans=0;
    ll adjacent;
    flag=0;
    ll _box=0;
    rep(i,r)rep(j,c){
        _box=box[i*c+j];
        // cout<<box[i*c+j] <<endl;
        if(i==0){
            if(j==0){
                adjacent=j+1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i+1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j] += compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans+=box[i*c+j]-_box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
            else if(j==c-1){
                adjacent=j-1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i+1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans += box[i * c + j] - _box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
            else{
                adjacent = j-1;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent=j+1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i+1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans += box[i * c + j] - _box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
        }
        else if(i==r-1){
            if(j==0){
                adjacent=i*c+j+1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i-1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans += box[i * c + j] - _box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
            else if(j==c-1){
                adjacent=i*c+j-1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i-1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans += box[i * c + j] - _box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
            else{
                adjacent =i*c+j-1;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent=i*c+j+1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i-1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans += box[i * c + j] - _box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
        }
        else{
            if(j==0){
                adjacent=i*c+j+1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i+1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i-1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans += box[i * c + j] - _box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
            else if(j==c-1){
                adjacent=i*c+j-1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i+1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent = (i - 1) * c + j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans += box[i * c + j] - _box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
            else{
                adjacent =i*c+j-1;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent=i*c+j+1;   
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent =(i+1)*c+j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                adjacent = (i - 1) * c + j;
                if (adjacent < r * c && adjacent >= 0)box[i*c+j]+=compare_adjacent(box[i*c+j],box[adjacent],flag);
                ans += box[i * c + j] - _box;
                //cout << "i:" << i << "j:" << j << "ans:" << ans << endl;
            }
        }
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