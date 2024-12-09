#include<stdio.h>
int n;
int partion(int arr[],int start,int end)
{
    int lb=start;
    int pivot=arr[lb];
    while(start<end){
        while(arr[start]<=pivot )start++;
         while(arr[end]>pivot )end--;
        if(start<end){
            int t=arr[start];
            arr[start]=arr[end];
            arr[end]=t;
          }

//        for(int i=0;i<n;i++)printf("%d ",arr[i]);
//printf("\n");
    }
    int t=arr[end];
    arr[end]=arr[lb];
    arr[lb]=t;

// for(int i=0;i<n;i++)printf("%d ",arr[i]);
//printf("o\n");
    return end;


}
 void quick_sort(int arr[],int lb,int ub){
     if(lb<ub){
     int loc=partion(arr,lb,ub);
//     printf(" loc=%d   ",loc);
for(int i=0;i<n;i++)printf("%d ",arr[i]);
printf("\n\n");
 quick_sort(arr,lb,loc-1);
 quick_sort(arr,loc+1,ub);
     }



 }
int main(){
//int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

 quick_sort(arr,0,n-1);
for(int i=0;i<n;i++)printf("%d ",arr[i]);


return 0;
}
