#include<stdio.h>
int main(){
printf("please enter n and m\n");
int n,m;
scanf("%d%d",&n,&m);
int arr1[n],arr2[m],arr[m+n];
printf("please enter %d element ",n);
for(int i=0;i<n;i++)scanf("%d",&arr1[i]);
printf("please enter %d element ",m);
for(int i=0;i<m;i++)scanf("%d",&arr2[i]);
int k=0;
for(int i=0;i<n;i++){
    arr[k++]=arr1[i];
}
for(int i=0;i<m;i++){
    arr[k++]=arr2[i];
}
printf("marge array is =");
for(int i=0;i<(m+n);i++)printf("%d ",arr[i]);







return 0;
}
