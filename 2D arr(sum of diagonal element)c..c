#include<stdio.h>
int main(){
printf("please enter n and m\n");
int n,m;
scanf("%d%d",&m,&n);
int arr[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
int sum=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i==j ||(i+j==n-1))sum+=arr[i][j];
    }
}
printf("%d",sum);


return 0;
}
