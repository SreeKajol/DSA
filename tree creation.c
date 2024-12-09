#include<stdio.h>
struct node {
struct node *left,*right;
int data;
};
struct node* creating_tree(){
int x;
printf("enter the data:");
scanf("%d",&x);
if(x==-1){
    return NULL;
}
else{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    printf(" enter the left data \n\n");
    new_node->left=creating_tree();
    printf("enter the right data\n\n");
    new_node->right=creating_tree();
    return new_node;
}

}
void display_the_tree(struct node*root){
struct node*tptr=root;
if(tptr!=NULL){
    printf("%d ",tptr->data);
    display_the_tree(tptr->left);
    display_the_tree(tptr->right);
}
}
int main(){
struct node *root;
root=creating_tree();
display_the_tree(root);

return 0;
}
