#include<stdio.h>
int main(){
printf("enter n:");
int n; scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("please enter search element:");
int terget;
scanf("%d",&terget);
int l=0,r=n-1;
while(l<=r){
    int mid=(l+r)/2;
    if(arr[mid]==terget){
    printf("element is found at %d index ",mid);
     return 0;
     }
    else if(arr[mid]>terget)r=mid-1;
    else l=mid+1;
}
printf("not found\n");


}
