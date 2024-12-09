#include<stdio.h>
int main(){
printf("please enter the number of element :");
int n; scanf("%d",&n);
int arr[n];
printf("\nplease enter %d elements",n);
for(int i=0;i<n;i++)scanf("%d",&arr[i]);
for(int i=1;i<n;i++){
    int t=arr[i],x=i;
     while(t<arr[x-1] && x>=0 ){
         arr[x]=arr[x-1];
         x--;
     }
     arr[x]=t;
}


printf("after sorting array is :");
for(int i=0;i<n;i++)printf("%d ",arr[i]);



return 0;
}
