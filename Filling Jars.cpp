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
// ll ok[10000005]={0};
int main()
{
    fast;
    ll n,m,sum=0;
    cin>>n>>m;
    while(m--){
        ll a,b,k;
        cin>>a>>b>>k;
      sum+=(b-a+1)*k;
    }
    cout<<(sum/n)<<endl;
    return 0;
}
