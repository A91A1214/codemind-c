#include<stdio.h>
int main(){
    int n,fact_count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
        fact_count++;
        }
    }
    if(fact_count==2)
    {
        printf("Prime");
    }
        else 
        {
            printf("Not Prime");
        }
    
}