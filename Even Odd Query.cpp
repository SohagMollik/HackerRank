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
int a[100005];
int main()
{
   fast;
   int n;
   cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }

   int q;
   cin>>q;
   while(q--){
    int x,y;
    cin>>x>>y;
    if((a[x]&1)||(a[x+1]==0 && x<y)){
        cout<<"Odd\n";
    }
  else {
        cout<<"Even\n";
    }

   }

    return 0;
}
