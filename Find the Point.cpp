#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,a,b,c,d,r1,r2;
    cin>>t;
    while(t!=0)
    {
        cin>>a>>b>>c>>d;
        r1=(2*c-a);
        r2=(2*d-b);

        t--;
        cout<<r1<<" "<<r2<<endl;

    }
}
