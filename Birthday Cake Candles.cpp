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
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    int mx=a[0];
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);

    }
    for(int i=0;i<n;i++){
        if(mx==a[i])count++;
    }
    cout<<count<<endl;
    return 0;
}
