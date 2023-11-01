#include<stdio.h>
int main()
{
int n,m,p,i;
scanf("%d%d",&n,&m);
for(i=1;i<=m;i++)
{
 p=n*i;
 if (p%m==0)
{
    printf("%d",n*m/p);
    break;
}
}
}