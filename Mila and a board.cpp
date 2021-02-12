#include<bits/stdc++.h>
using namespace std;
#define ll 1e18
int main ()
{
    long long int n,sum=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
        if(n%i==0)
            sum+=i;


    cout<<sum<<endl;
}
