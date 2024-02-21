#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,diff=0;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
    if(a[i]%2==0){
        sum+=a[i];
    }
    else if(a[i]%2!=0){
        diff=diff+a[i];
    }
    }
    int ads=abs(diff-sum);
    printf("%d",ads);
}