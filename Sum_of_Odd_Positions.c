#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int arr[n],i,sum=0;
 for(i=0;i<n;i++)
 {
     scanf("%d ",&arr[i]);
 }
 for(i=1;i<n;i+=2)
 {   
 
 sum=sum+arr[i] ;
 }
 printf("%d",sum);
}