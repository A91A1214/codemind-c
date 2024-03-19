#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i*i;
    }
    int c=n*(n+1)/2;
    int ss=c*c;
    int di=sum-ss;
    printf("%d",abs(di));
}