#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m1[3][3]={1,2,3,2,3,4,1,1,1},m2[3][3]={4,5,6,7,8,9,4,5,7};
    int i,j,add[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           add[i][j]=m1[i][j]+m2[i][j];
        }

    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           cout<<add[i][j]<<endl;
        }

    }
}
