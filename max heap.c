 #include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100
 int heap[MAX_HEAP_SIZE],n=-1;

 void insert(int x){
     n++;
     heap[n]=x;
     int t=n,parent;
     while(t>0){
                 parent=(t-1)/2;
        if(heap[parent]<heap[t]){
            int x=heap[t];
            heap[t]=heap[parent];
            heap[parent]=x;
        }
        else {
            return ;
        }
        t=parent;
     }




 }

 int main(){

  int li=6;
  for(int i=1;i<=li;i++){
        int x; scanf("%d",&x);
    insert(x);
  }
 for(int i=0;i<li;i++){
    printf("%d ",heap[i]);
 }


 return 0;
 }
