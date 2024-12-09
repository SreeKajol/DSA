 #include <stdio.h>
#include <stdlib.h>

// Define a structure for tree node
struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Function to create a new node
struct TreeNode* createNode(int x) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = x;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a key into BST
struct TreeNode* insert(struct TreeNode* root, int key) {
    if (root == NULL) {
        return createNode(key);
    }

    if (key < root->data) {
        root->left = insert(root->left, key);
    } else if (key > root->data) {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function to perform inorder traversal of BST
void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
 struct TreeNode* search(struct TreeNode* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return search(root->left, key);
    }

    return search(root->right, key);
}
// Main function
int main() {
    struct TreeNode* root = NULL;
    int keys[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    int numKeys = sizeof(keys) / sizeof(keys[0]);

    // Insert keys into the BST
    for (int i = 0; i < numKeys; i++)   {
        root = insert(root, keys[i]);
    }

//    int x; printf("enter search element:");
//    scanf("%d",&x);
// struct TreeNode *result=NULL;
// result=search(root,x);
// if(result!=NULL) printf("element is found\n");
//    else printf("element is not found\n");

    // Perform inorder traversal
    printf("Inorder Traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
