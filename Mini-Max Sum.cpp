#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a[5];
    int i;
    long long int sum_min=0,sum_max=0;
    for(i=0;i<5;i++){
    cin>>a[i];
    }
    sort(a,a+5);

    for(i=0;i<4;i++){
        sum_min=sum_min+a[i];
    }
    for(i=1;i<=4;i++){
        sum_max=sum_max+a[i];
    }
    cout<<sum_min<<" "<<sum_max<<endl;

    return 0;
}
