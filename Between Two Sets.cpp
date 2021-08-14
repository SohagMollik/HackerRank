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
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    int ans=0;
    for(int x=1;x<=100;x++){
        bool ok=true;
        for(int i=0;i<n;i++)if(x%a[i]!=0)ok=false;
        for(int j=0;j<m;j++)if(b[j]%x!=0)ok=false;
        if(ok)ans++;
    }
    cout<<ans<<endl;
    return 0;
}
