#include<stdio.h>
int main(){
printf("enter n:");
int n; scanf("%d",&n);
int arr[n];
printf("please enter number of %d element \n",n);
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
 int l=0,r=n-1;
 while(l<=r){
    int t=arr[l];
    arr[l]=arr[r];
    arr[r]=t;
    l++,r--;
 }
printf("array after reverse opperation\n");
for(int i=0;i<n;i++)printf("%d ",arr[i]);




return 0;
}

