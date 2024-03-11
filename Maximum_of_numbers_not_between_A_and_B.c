#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]<x||arr[i]>y){
            if(arr[i]>k){
                k=arr[i];
            }
        }
    }
    if(k==0) printf("-1");
    else printf("%d",k);
}