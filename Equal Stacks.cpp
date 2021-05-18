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
    int n1,n2,n3,s1=0,s2=0,s3=0;
    cin>>n1>>n2>>n3;
    queue<int>a,b,c;
    for(int i=0;i<n1;++i){
        int x;
        cin>>x;
        a.push(x);
        s1+=x;
    }

    for(int i=0;i<n2;++i){
        int x;
        cin>>x;
        b.push(x);
        s2+=x;
    }

    for(int i=0;i<n3;++i){
        int x;
        cin>>x;
        c.push(x);
        s3+=x;
    }

    while(s1!=s2||s2!=s3){
        if(s1>s2&&s1>s3){
            s1-=a.front();
            a.pop();
        }
       else if(s2>s1&&s2>s3){
            s2-=b.front();
            b.pop();
        }
        else if(s3>s1&&s3>s2){
            s3-=c.front();
            c.pop();
        }
    }

    cout<<s1<<endl;
    return 0;
}

