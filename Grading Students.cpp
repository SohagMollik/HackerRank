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
    while(n--)
    {
        int x;
        cin>>x;
        if(x<38)cout<<x<<endl;
        else{
            int y=x/5;
            int p=(y+1)*5;
            if((p-x)<3)cout<<p<<endl;
            else cout<<x<<endl;
        }
    }

    return 0;
}
