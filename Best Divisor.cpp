
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,ans,count=0,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0){
        int temp=0,x=i;
        while(x!=0){
           temp+=x%10;
           x=x/10;
        }
       if(temp>count){
        count=temp;
        ans=i;
       }
        }

    }
    cout<<ans<<endl;

}

