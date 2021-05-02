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
    string s;
    cin>>s;
    ll count=0;
    string l="";
    string r="";
    string m="";
    rep(i,s.length()){
        if(s.compare(i,1,"R")==0){
            count++;
            m+="R";
        }
        else{
            if(count%2==0){
                if(r.length()>=1){
                    if(r.compare(r.length()-1,1,s,i,1)==0){
                        r=r.erase(r.length()-1);
                    }
                    else{
                        r += s[i];
                    }
                }
                else{
                    r+=s[i];
                }
            }
            else{
                if(l.length()>=1){
                    if(l.compare(l.length()-1,1,s,i,1)==0){
                        l=l.erase(l.length()-1);
                    }
                    else{
                        l += s[i];
                    }
                }
                else{
                    l+=s[i];
                }
            }
        }
    }
    string ans="";
    if(count%2==0){
        rep(i,l.length()){
            ans+=l[l.length()-1-i];
        }
        rep(i,r.length()){
            ans+=r[i];
        }
    }
    else{
        rep(i,r.length()){
            ans+=r[r.length()-i-1];
        }
        rep(i,l.length()){
            ans+=l[i];
        }
    }
    ll len=ans.length();
    ll tmp=0;
    ll k=0;
    // cout<<ans;
    string answ="";
    while(tmp<len){
        if(k==0){
            
            answ+=ans[tmp];
            tmp++;
            k++;
        }
        else if(answ.compare(k-1,1,ans,tmp,1)==0){
            answ=answ.erase(k-1);
            k--;
            tmp++;
        }
        else{
            answ+=ans[tmp];
            k++;
            tmp++;
        }
        // cout<<answ <<endl;
    }
    cout<<answ;
}