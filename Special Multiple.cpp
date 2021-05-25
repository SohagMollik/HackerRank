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
        int n;
        cin>>n;
        vector<ll>v;
        v.pb(9);
        int i=0;
        int N=10000;
          while(N--){
            ll x=v[i]*10;
            v.pb(x);
            x=v[i]*10+9;
            v.pb(x);
            i++;
          }
          for(int k=0;k<v.size();k++){
           if(v[k]%n==0){
             cout<<v[k]<<endl;
            break;
           }
          }
    }


    return 0;
}
