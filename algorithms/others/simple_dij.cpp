#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define MAX 9999

// 有向グラフならtrue、無向グラフならfalseに
#define DIRECTED 1
// ダイクストラアルゴリズム
// スタートノードsとノードiの距離をdist[i]
// ノードiの状態　chk[i](0 or 1)
// ノードiの前のノードpath[i]
// 入力形式は (有向ならa->b)　ノードの番号は1-n;
// ノード数　リンク数(辺)
// a　b　距離　　＊リンクの個数

// 3 3 1 2 4 1 3 1 3 2 2 1 2
int dij(vector<vector<int> >& graph, int link, int n, int src, int dst);
int main(){
    int n,link;
    cin>>n>>link;
    int a,b,d;


    vector<vector<int> > graph(link, vector<int>(n,MAX));
    if(DIRECTED==1){
        rep(i,link){
            cout<<"input nodes & distance >";
            cin>>a>>b>>d;
            a--;b--;
            graph[a][b]=d;
        }
    }
    else
    {
        rep(i, link)
        {
            cin >> a >> b >> d;
            a--;
            b--;
            graph[a][b] = d;
            graph[b][a] = d;
        }
    }

    cout<<"input start & goal >";
    int src,dst;
    cin>>src>>dst;
    int min_dist;
    src--;dst--;
    min_dist = dij(graph,link,n,src,dst);
    cout<<"最短距離:"<<min_dist<<endl;
}

int dij(vector<vector<int> > &graph, int link, int n, int src, int dst)
{
    int *path, *chk,*dist;
    path = new int(n);
    dist = new int(n);
    chk = new int(n);
    int min=MAX;
    int min_ind;
    rep(i,n){
        dist[i] = graph[src][i];
        if(dist[i]<MAX)path[i]=src;
        if(min>dist[i]){
            min=dist[i];
            min_ind = i;
        }
    }
    chk[min_ind]=1;
    int tmp_node;
    tmp_node=min_ind;
    while(chk[dst]==0){
        cout<<tmp_node<<endl;
        rep(i,n){
            if(graph[tmp_node][i]<MAX){
                if (dist[i] > dist[tmp_node] + graph[tmp_node][i])
                {
                    dist[i] = dist[tmp_node] + graph[tmp_node][i];
                    path[i]=tmp_node;   
                }
            }
        }
        min=MAX;
        rep(i,n){
            if(chk[i]==0&&dist[i]<min){
                min=dist[i];
                tmp_node=i;
            }
        }
        chk[tmp_node]=1;
    }

    return dist[dst];
}
