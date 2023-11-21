#include<stdio.h>
int main()
{
 int x,y,z,i;
 scanf("%d%d%d",&x,&y,&z);
 for(i=x;y<=z;y++)
 {
     printf("%d x %d = %d
",x,y,x*y);
 }
}