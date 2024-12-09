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
int trans[n][m];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        trans[j][i]=arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)printf("%d ",trans[i][j]);
    printf("\n");
}









return 0;
}
