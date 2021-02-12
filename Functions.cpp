#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],i,mx;
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    mx=a[0];
    for(i=0;i<4;i++){
        if(a[i]>=mx)
            mx=a[i];
    }
    cout<<mx<<endl;
}
