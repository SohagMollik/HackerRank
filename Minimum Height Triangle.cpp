#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int b,a,h;
    cin>>b>>a;
    if((2*a)%b==0){
    h=((2*a)/b);
    cout<<h<<endl;
    }
    else{
       h=((2*a)/b)+1;
       cout<<h<<endl;
    }
    return 0;

}
