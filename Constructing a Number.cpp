#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],i;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        ll sum=0;
        for(i=0;i<n;i++){
            sum+=a[i];
        }
        if(sum%3==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
