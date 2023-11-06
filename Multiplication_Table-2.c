#include<stdio.h>
int main()
{
   int n,i,range;
   scanf("%d%d",&n,&range);
   while(range<=0);
   for(i=1;i<=range;++i)
   {
     printf("%d x %d = %d
",n,i,n*i);
   }
}