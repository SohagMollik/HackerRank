#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,n,k;
    cin>>t;
    while(t!=0){
        cin>>n>>k;
    if(k<(n-k-1))
        cout<<(2*k+1)<<endl;

    else

    cout<<2*(n-1-k)<<endl;
        t--;
    }
}
