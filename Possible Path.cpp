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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y;
        cin>>a>>b>>x>>y;

//        int m=((y-b)/(x-a));
//        ll q=a+m*b;
//        ll vis=min(q,b);
//        ll temp=max(q,b);
        ll  ok=__gcd(min(a,b),max(a,b));
        ll ans=__gcd(min(x,y),max(x,y));

        if(ok==ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
