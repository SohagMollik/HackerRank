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
    long double x, y, max_x=0, max_y=0, min_x=10e9, min_y=10e9;
    while(n--)
    {

        cin>>x>>y;
        if(x==0){
            max_y=max(max_y, y);
            min_y=min(min_y, y);
        }
        else{
            max_x=max(max_x, x);
            min_x=min(min_x,x);
        }
    }
    long double mx=max(abs(max_x  - min_x),abs(min_y - max_y));
    long double q1=sqrt((max_x*max_x)+(max_y*max_y));
    long double q2=sqrt((min_x*min_x)+(max_y*max_y));
    long double q3=sqrt((min_x*min_x)+(min_y*min_y));
     long double q4=sqrt((max_x*max_x)+(min_y*min_y));
     long double ans=max(mx, max(q1,max(q2,max(q3,q4))));
     cout<<fixed<<setprecision(6)<<ans<<endl;
    return 0;
}
