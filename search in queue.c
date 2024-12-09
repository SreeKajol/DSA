#include<stdio.h>
#define n 5
int queue[n];
int front=-1,rear=-1;

void enqueue(int x){
  if(front==-1 && rear==-1){
    front=rear=0;
    queue[rear]=x;
}
else if(rear==n-1){
    printf("overflow condition\n");
}
else {
    rear++;
    queue[rear]=x;
}


}

 int dequeue()
 {
if(front==-1 && rear==-1)printf("queue is empty");
else if(front==rear){
    int x=queue[front];
    front=rear=-1;
return x;
}
else{

return queue[front++];
}

}
void display(){
if(front==-1 && rear==-1){
    printf("empty queue");
}
else {
    for(int i=front ;i<=rear;i++){
        printf("%d ",queue[i]);
    }
}

}

int search(int x){
if(front==-1 && rear==-1){
    printf("empty queue");
    return 0;
}
else {
    for(int i=front ;i<=rear;i++){
       // printf("%d ",queue[i]);
       if(x==queue[i])return 1;
    }
    return 0;
}

}
int main(){

enqueue(3);
enqueue(4);
enqueue(8);
enqueue(9);
display();
printf("\n");
printf("dequeue element is %d \n",dequeue());
 printf("dequeue element is %d \n",dequeue());
 enqueue(13);
enqueue(14);
display();
int x;
printf("enter searching element:");
scanf("%d",&x);
if(search(x))printf("data element is found\n");
    else printf("data element is not found\n");


return 0;
}


