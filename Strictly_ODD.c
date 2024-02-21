#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2!=0&&i%2==0){
            sum++;
        }
    }
    if(sum>=1) printf("False");
    else printf("True");
}