#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int t,n;
    int ans;
    cin>>t;
    while(t!=0)
    {
          cin>>n;
          ans=1;
        for(int i=0;i<=n-2;i++){
            int x;
        cin>>x;
         ans=(x*ans)%1234567;
        }
       cout<<ans<<endl;

      t--;
    }



}
