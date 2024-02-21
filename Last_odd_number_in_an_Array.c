#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int i;
    for(i=n-1;i>0;i--){
        if(ar[i]%2!=0){
        break;
        }
    }
    printf("%d",ar[i]);
}