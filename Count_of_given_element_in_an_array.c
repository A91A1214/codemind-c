#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int a;
    scanf("%d",&a);
    int sum=0;
    for(int i=0;i<n;i++){
    if(ar[i]==a){
        sum++;
    }
    }
    printf("%d",sum);
}