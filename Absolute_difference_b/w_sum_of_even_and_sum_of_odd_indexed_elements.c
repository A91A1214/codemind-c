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
    int diff=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=ar[i];
        }
        else{
            diff+=ar[i];
        }
    }
    printf("%d",abs(sum-diff));
}