#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,r,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        r=k/2;
        r*=(k-k/2);
        cout<<r<<endl;
    }
}
