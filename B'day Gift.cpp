#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    int a[t];
    double ans,sum=0;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
        sum+=a[i];
    }

        ans=(double)(sum/2);
        cout<<fixed<<setprecision(1)<<ans<<endl;

}
