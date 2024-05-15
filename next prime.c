#include<stdio.h>
int is_prime(int n)
{
 int fc=0,i;
 for(i=1;i<=n;i++)
 {
  if(n%i==0) fc++; //counting factors
 }
 if(fc==2) return 1;
 else return 0;
}
int_get_next_prime(int x)
{
    while(is_prime(x)==0){
        x++;
    }
    return x;
}
int main()
{
 printf("%d",get_next_prime(5));
}
