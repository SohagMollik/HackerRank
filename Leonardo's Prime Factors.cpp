#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long int t,n;
  cin>>t;
  long long int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

  while(t!=0)
  {
     long long int p=1,count=0;
      cin>>n;
      for(int i=0;i<15;i++){
        p=p*a[i];
        if(p<=n)
         count++;
      }
      cout<<count<<endl;
      t--;
  }
}
