#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define Sort(a) sort(a.begin(), a.end())
using ll = long long;
#define INF 100100100100100100
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

#define DEBUG_ON

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
    // cout<<x<<":"<<y;
    double r=pow(x*x+y*y,0.5);
    double theta;
    // if(x==0){
    //     if(y>0){
    //         theta=pi/2;
    //     }
    //     else{
    //         theta=-pi/2;
    //     }
    // }
    // else{
    //     theta = atan(y / x);
    // }
    // cout<<theta;
    theta=acos(x/r);
    if(y<0){
        theta*=-1;
    }
    double ax,ay;
    double rad=pi*360/n;
    ax=r*cos(theta+2*pi/n);
    ay=r*sin(theta+2*pi/n);
    cout<<fixed << setprecision(10) << ax + gx << " " << ay + gy << endl;
    return 0;

}