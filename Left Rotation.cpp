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
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=d+1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=1;i<=d;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
