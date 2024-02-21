#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
            sum++;
        }
    }
   if(sum==n) printf("True");
   else printf("False");
}