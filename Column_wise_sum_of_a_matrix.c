#include<stdio.h>
int main(){
    int m,n,sum=0;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
        scanf("%d",&arr[i][j]);
    }
    }
   sum=0;
       for(int j=0;j<n;++j){
     for(int i=0;i<m;++i){
         sum=sum+arr[i][j];
     } 
     printf("%d ",sum);
     sum=0;
       }
}