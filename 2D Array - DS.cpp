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
    int a[36];
    for(int i=1;i<=36;i++){
        cin>>a[i];
    }
    vector<int>v;
    int sum1=a[1]+a[2]+a[3]+a[8]+a[13]+a[14]+a[15];
    v.pb(sum1);
     int sum2=a[2]+a[3]+a[4]+a[9]+a[14]+a[15]+a[16];
    v.pb(sum2);
     int sum3=a[3]+a[4]+a[5]+a[10]+a[15]+a[16]+a[17];
    v.pb(sum3);
     int sum4=a[4]+a[5]+a[6]+a[11]+a[16]+a[17]+a[18];
    v.pb(sum4);
     int sum5=a[7]+a[8]+a[9]+a[14]+a[19]+a[20]+a[21];
    v.pb(sum5);
      int sum6=a[8]+a[9]+a[10]+a[15]+a[20]+a[21]+a[22];
    v.pb(sum6);
      int sum7=a[9]+a[10]+a[11]+a[16]+a[21]+a[22]+a[23];
    v.pb(sum7);
    int sum8=a[10]+a[11]+a[12]+a[17]+a[22]+a[23]+a[24];
    v.pb(sum8);
    int sum9=a[13]+a[14]+a[15]+a[20]+a[25]+a[26]+a[27];
    v.pb(sum9);
    int sum10=a[14]+a[15]+a[16]+a[21]+a[26]+a[27]+a[28];
    v.pb(sum10);
    int sum11=a[15]+a[16]+a[17]+a[22]+a[27]+a[28]+a[29];
    v.pb(sum11);
    int sum12=a[16]+a[17]+a[18]+a[23]+a[28]+a[29]+a[30];
    v.pb(sum12);
    int sum13=a[19]+a[20]+a[21]+a[26]+a[31]+a[32]+a[33];
    v.pb(sum13);
     int sum14=a[20]+a[21]+a[22]+a[27]+a[32]+a[33]+a[34];
    v.pb(sum14);
     int sum15=a[21]+a[22]+a[23]+a[28]+a[33]+a[34]+a[35];
    v.pb(sum15);
    int sum16=a[22]+a[23]+a[24]+a[29]+a[34]+a[35]+a[36];
    v.pb(sum16);
    int mx=*max_element(v.begin(),v.end());
    cout<<mx<<endl;
    return 0;
}
