#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define INF 100100100100100100
#define DEBUG_ON



// 正多角形(偶数辺)の座標を出力する

int main()
{
    double n;
    double x,y;
    double x2, y2;
    double pi=3.14159265359;
    cin>>n>>x>>y>>x2>>y2;
    double gx,gy;
    gx=(x+x2)/2;
    gy=(y+y2)/2;
    x-=gx;
    y-=gy;
    double r=pow(x*x+y*y,0.5);
    double theta;
    theta=acos(x/r);
    if(y<0){
        theta*=-1;
    }
    double ax,ay;
    // double rad=pi*360/n;
    rep(i,n){
        ax=r*cos(theta+2*i*pi/n);
        ay=r*sin(theta+2*i*pi/n);
        cout<<"x"<<i<<",y"<<i<<":" <<fixed << setprecision(10) << ax + gx << " " << ay + gy << endl;
    }
    return 0;

}