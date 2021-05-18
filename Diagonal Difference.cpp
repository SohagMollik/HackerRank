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
   int a[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
   }
        int d1=0,d2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                d1+=a[i][j];
            }
           if(i==(n-j-1)){
            d2+=a[i][j];
           }

        }
    }

   cout<<abs(d1-d2)<<endl;

    return 0;
}
