#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int p;
    float var;
    scanf("%d",&n);
    var=sqrt((double)n);
    p=var;
    if(p==var)
        printf("True");
    else
        printf("False");
      

}