#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
    int avg=sum/n;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(ar[i]==avg){
            cnt++;
        }
    }
    if(cnt>=1) printf("True");
    else printf("False");
}