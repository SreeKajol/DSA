 #include<stdio.h>
int main(){
struct node{
int data;
struct node *next;
};
struct node *list,*tptr,*nptr;
int n;scanf("%d",&n);
list=NULL;
for(int i=1;i<=n;i++){
    nptr=(struct node*) malloc(sizeof(struct node));
    nptr->next=NULL;
    scanf("%d",&nptr->data);
    if(list==NULL){
        list=nptr;
        tptr=nptr;
    }
    else {
        tptr->next=nptr;
        tptr=nptr;
    }
}

tptr=list;
while(tptr!=NULL){
    printf("%d ",tptr->data);
    tptr=tptr->next;
}
//          deletion int the first
list=list->next;
printf("in first:");
tptr=list;
while(tptr!=NULL){
    printf("%d ",tptr->data);
    tptr=tptr->next;
}
printf("\n");

// deletion in any point
int item;
scanf("%d",&item);
tptr=list;

//struct node *pptr;
//while(tptr->data!=item){
//        pptr=tptr;
//    tptr=tptr->next;
//}
//pptr->next=tptr->next;

//another method
tptr=list;
while(tptr->next->data!=item){
    tptr=tptr->next;
}
tptr->next=tptr->next->next;

 printf("in any point:");
tptr=list;
while(tptr!=NULL){
    printf("%d ",tptr->data);
    tptr=tptr->next;
}
printf("\n");
//        dletetion in the end
tptr=list;
while(tptr->next->next!=NULL){
    tptr=tptr->next;
}
tptr->next=NULL;

 printf("in last:");
tptr=list;
while(tptr!=NULL){
    printf("%d ",tptr->data);
    tptr=tptr->next;
}
return 0;
}

