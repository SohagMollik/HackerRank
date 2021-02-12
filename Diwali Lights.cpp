#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,bal=1;
        cin>>n;
        for(int i=0;i<n;i++){
            bal*=2;
            bal=bal%100000;
        }
        cout<<bal-1<<endl;
    }
}
