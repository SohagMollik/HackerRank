#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n1,n2,rem,t,a,b,ans;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n1>>n2;
        a=n1;
        b=n2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
     ans=(a/n1)*(b/n1);
     cout<<ans<<endl;
    }
}
