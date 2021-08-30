#include<bits/stdc++.h>
#define ll    long long
#define pb    push_back
#define ull   unsigned long long
#define f     first
#define s     second
#define mod   1000000007
#define pi    acos(-1.0)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fast;
    string s;
    cin>>s;
    vector<int>v;
    int n=stoi(s);
    int len=s.size();
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=s[i]-'0';
    }

     for(int i=2;i*i<=n;i++){
    if(n%i==0){
        while(n%i==0){
            v.pb(i);
            n/=i;
        }
    }
   }
   if(n>1)v.pb(n);

    int ans=0;
    for(int i=0;i<v.size();i++){
            if(v[i]>9){
                while(v[i]!=0){
                    int rem=v[i]%10;
                    ans+=rem;
                    v[i]=v[i]/10;
                }
            }
            else{
            ans+=v[i];
            }
    }

   if(ans==sum)cout<<1<<endl;
   else cout<<0<<endl;
    return 0;
}
