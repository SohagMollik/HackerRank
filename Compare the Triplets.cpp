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
    int a,b,c,x,y,z,alice=0,bob=0;
    cin>>a>>b>>c>>x>>y>>z;
    if(a>x)alice+=1;
    if(a<x)bob+=1;
    if(b>y)alice+=1;
    if(b<y)bob+=1;
    if(c>z)alice+=1;
    if(c<z)bob+=1;
    cout<<alice<<" "<<bob<<endl;
    return 0;
}
