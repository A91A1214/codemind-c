#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int a=(l+2*w)*(b+2*w)-(l*b);
    printf("%d",a*c);
}