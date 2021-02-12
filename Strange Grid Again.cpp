#include<bits/stdc++.h>
using namespace std;
int main ()
{
 long long int r,c,i,value;
 cin>>r>>c;
 if(r%2!=0)
 {
     r=r-1;
     value=r*5;
     i=1;
     while(i<c){
       value+=2;
       i++;
     }
 }
 else{
    r=r-2;
    value=r*5+1;
    i=1;
    while(i<c){
        value+=2;
        i++;
    }
 }
 cout<<value<<endl;

}
