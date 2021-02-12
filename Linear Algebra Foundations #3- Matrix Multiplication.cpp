#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m1[3][3]={1,2,3,2,3,4,1,1,1},m2[3][3]={4,5,6,7,8,9,4,5,7},i,j,k,sum=0;
    int mul[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++){
                sum=sum+m1[i][k]*m2[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            cout<<mul[i][j]<<endl;
        }
    }
}
