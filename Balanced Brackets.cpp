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

string solve(string s)
{
  stack<char>st;
  for(auto c: s){
    switch(c){
      case '{':
      case '(':
      case '[':
          st.push(c);
          break;
      case '}':
        if(st.empty()||st.top()!='{'){
            return "NO";
        }
        st.pop();
        break;
         case ')':
        if(st.empty()||st.top()!='('){
            return "NO";
        }
        st.pop();
        break;
          case ']':
        if(st.empty()||st.top()!='['){
            return "NO";
        }
        st.pop();
        break;
    }
  }
  return st.empty()? "YES" : "NO";
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--){
        string s;
       cin>>s;
    cout<<solve(s)<<endl;
    }

    return 0;
}
