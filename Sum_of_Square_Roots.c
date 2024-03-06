#include<stdio.h>
#include<math.h>
int main(){
    int a,b,sum=0;
    float p;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
       p+=sqrt(i);
    }
     //  sum=sum+p;
    printf("%.2f",p);
}