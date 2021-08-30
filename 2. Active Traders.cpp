#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{

    fast;
    int n;
    cin>>n;
    double x=(double)n;
    map<string,int>mp;
    map<string,int>::iterator it;
    vector<string>v;
    while(n--){
        string s;
        cin>>s;
        mp[s]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
            double xx=(double)it->second;
           double ans= ((xx*100.00)/x);
           string yy=it->first;
           if(ans>=5)v.pb(yy);

    }
    for(auto z: v){
        cout<<z<<endl;
    }
    return 0;
}
