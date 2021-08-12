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
    ll s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    vector<ll>v,vec;
    while(m--){
        ll x;
        cin>>x;
        ll apple=x+a;
        v.pb(apple);
    }
    while(n--){
        ll y;
        cin>>y;
        ll orange=y+b;
        vec.pb(orange);
    }
    int apc=0,orgc=0;
    for(auto &z: v){
        if(z>=s&&z<=t)apc++;
    }
    for(auto &w : vec){
        if(w>=s&&w<=t)orgc++;
    }
    cout<<apc<<endl<<orgc<<endl;
    return 0;
}
