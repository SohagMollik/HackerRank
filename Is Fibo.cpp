#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define ld   long  double
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
    while(t--){
        ll n;
     cin>>n;
     ld root = sqrt(5.0*n*n+4);
     ll  iroot = root;
     if(root==iroot)cout<<"IsFibo\n";
     else{
          ld  root = sqrt(5.0*n*n-4.0);
          ll  iroot=root;
          if(root==iroot) cout<<"IsFibo\n";
          else  cout<<"IsNotFibo\n";
     }

    }
    return 0;
}
