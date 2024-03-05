#include<stdio.h>
int main(){
    int n,i,j,k,z=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(k=1;k<=z;k++){
            printf("%d ",i);
        }
        z+=1;
        printf("
");
    }
}