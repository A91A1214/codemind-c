#include<stdio.h>
int main(){
    int n,temp=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            temp++;
            break;
        }
    }
    if(temp==0&&n!=1) printf("Prime");
    else printf("Not Prime");
}