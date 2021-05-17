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
    int n,q;
    cin>>n;
    unordered_multiset<string>st;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
     st.insert(s);
    }
    cin>>q;
     for(int i=0;i<q;i++){
        cin>>s;
      cout<<st.count(s)<<endl;
    }

    return 0;
}
