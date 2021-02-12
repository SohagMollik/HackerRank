#include<bits/stdc++.h>
using namespace std;
int main (){
int row,col,i,j,sum1=0,sum2=0,m,n,temp1;
cin>>row>>col;
int a[row][col];
if(row==col){
 m=row-1;
n=0;
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
       cin>>a[i][j];
    }
}
for(i=0;i<row;i++){
    sum1=sum1+a[i][i];
     sum2=sum2+a[m][n];
    m--;
    n++;


}
if((sum1-sum2)<0){
    temp1=(-1)*(sum1-sum2);
cout<<temp1<<endl;
}
else
cout<<sum1-sum2<<endl;

}
 else{
    cout<<"not possible"<<endl;
 }

return 0;
}
