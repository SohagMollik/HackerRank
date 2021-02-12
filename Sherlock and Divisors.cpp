#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,i;
    cin>>t;
    while(t!=0){
    long long int n,a=0;

        cin>>n;
        for(i=1;i*i<n;i++)
        {
            if(n%i==0){

               if(i%2==0)
                a++;
               if((n/i)%2==0)
                a++;

            }

        }
        if(i*i==n&&i%2==0)
            a++;
            cout<<a<<endl;

        t--;
    }
}
