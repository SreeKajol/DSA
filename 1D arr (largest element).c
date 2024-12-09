#include<stdio.h>
int main(){
printf("enter n:");
int n; scanf("%d",&n);
int arr[n];
printf("please enter number of %d element \n",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int ans=-100;
for(int i=0;i<n;i++){
    if(arr[i]>ans)ans=arr[i];
}
printf("largest element is =%d",ans);






return 0;
}
