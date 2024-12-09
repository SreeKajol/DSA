#include<stdio.h>
int main(){
printf("enter n:");
int n; scanf("%d",&n);
int arr[n];
printf("please enter number of %d element \n",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

int odd_sum=0,even_sum=0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0)even_sum+=arr[i];
    else odd_sum+=arr[i];
}
printf("even sum is=%d \nodd sum is =%d\n",even_sum,odd_sum);








return 0;
}
