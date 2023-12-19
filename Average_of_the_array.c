#include<stdio.h>
int main()
{
 int n;
 int arr[n],i;
 scanf("%d",&n);
  for(i=0;i<=n;i++)
 {
     scanf("%d ",&arr[i]);
 }
 float sum=0;
 for(i=0;i<=n;i++)
 sum=sum+arr[i];
  printf("%.2f",sum/n);
}