#include<stdio.h>
int main(){
    int n, even_count = 0, i;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++)
          scanf("%d",&arr[i]);
    for(i = 0; i < n; i++)
    {
        if(arr[i-1] % 2 != 0 && arr[i+1]%2!=0 && arr[i]%2==0){
            even_count++;
        }
    }
    printf("%d",even_count);

    return 0;
}
