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
    int l=s.size();
    if(s[l-2]=='A'){
            if(s[0]=='1'&&s[1]=='2'&&s[3]=='0'&&s[4]=='0'&&s[6]=='0'&&s[7]=='0')
            cout<<"00:00:00\n";
            else if(s[0]=='1'&&s[1]=='2'){
              s[0]='0';
              s[1]='0';
                for(int i=0;i<l-2;i++){
                cout<<s[i];
            }
     cout<<endl;
            }
    else{
            for(int i=0;i<l-2;i++){
                cout<<s[i];
            }
     cout<<endl;
    }

    }



    else{
        if(s[0]=='1'&&s[1]=='2'){
            for(int i=0;i<l-2;i++){
                cout<<s[i];
            }
     cout<<endl;
        }
        else{
            s[0]=(s[0]+'1')-'0';
            s[1]=(s[1]+'2')-'0';
            for(int i=0;i<l-2;i++){
                cout<<s[i];
            }
     cout<<endl;
        }
    }

    return 0;
}
