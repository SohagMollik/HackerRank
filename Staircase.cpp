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
   int star=1,space=n-1;
   while(n>0){
    for(int i=0;i<space;++i){
        cout<<" ";
    }
    for(int i=0;i<star;++i){
        cout<<"#";
    }
    space--;
    star++;
    n--;
    cout<<endl;
   }

    return 0;
}
