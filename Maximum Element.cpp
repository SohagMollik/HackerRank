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
stack<int>s;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        int q,x;
        cin>>q;
     switch(q){
     case 1:
        cin>>x;
        if(s.empty()){
            s.push(x);
        }
        else{
            s.push(max(x,s.top()));
        }
        break;

     case 2:
        if(!s.empty()){
            s.pop();
        }
        break;

     case 3:
        cout<<s.top()<<endl;
        break;
    default:
        break;
     }
    }

    return 0;
}
