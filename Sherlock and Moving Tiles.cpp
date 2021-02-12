
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

  int l,s1,s2,q;
  cin>>l;
  cin>>s1;
  cin>>s2;
  if(s2<s1) swap(s1,s2);
  cin>>q;
  s2-=s1;
  while(q-->0) {
    ll x;
    double ans;
    cin>>x;
      ans=((double)(sqrt(2.0)*(l-sqrt((double)x))/s2));
      cout<<fixed<<setprecision(4)<<ans<<endl;
  }

  return 0;
}

