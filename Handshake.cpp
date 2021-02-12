#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,p;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        p=((n*(n-1))/2);
        cout<<p<<endl;
        t--;
    }
    return 0;
}
