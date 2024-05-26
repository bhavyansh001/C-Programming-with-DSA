#include <stdio.h>
#include <stdlib.h>
//Cases for deletion-
    // The node is a leaf node.
    // The node is a non-leaf node.
    // The node is the root node.

    // When you delete a node that is not a leaf node, you replace its position with its InOrder predecessor(preferred) or Inorder successor

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* ptr;
    ptr = (struct node* )malloc(sizeof(struct node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

void inOrder(struct node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d\t", root->data);
        inOrder(root->right);
    }
}

struct node* inOrderPredecessor(struct node* root){     //inOrderPredecessor is the right most child of left subtree
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}

struct node* deleteNode(struct node* root, int value){
    struct node* iPre;
    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){      //simply delete if a leaf node
        free(root);
        return NULL;
    }
    //Main logic-
    if(value < root->data){
        root->left = deleteNode(root->left, value);
    }
    else if(value > root->data){
        root->right = deleteNode(root->right, value);
    }
    //Reached at the node, now the deletion part-
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
}

int main(){
    struct node* root = createNode(60);                          /*                               60                    */
                                                                 /*                              /  \                   */
    struct node* leaf1 = createNode(45);                         /*                             /    \                  */
    struct node* leaf2 = createNode(75);                         /*                            45    75                 */
                                                                 /*                           / \   /  \                */
    struct node* leaf3 = createNode(30);                         /*                          /   \ 70   80              */
    struct node* leaf4 = createNode(50);                         /*                         30    50                    */
                                                                 /*                        /  \                         */
    struct node* leaf5 = createNode(70);                         /*                       15   40                       */
    struct node* leaf6 = createNode(80);

    struct node* leaf7 = createNode(15);
    struct node* leaf8 = createNode(40);

    root->left = leaf1;
    root->right = leaf2;

    leaf1->left = leaf3;
    leaf1->right = leaf4;

    leaf2->left = leaf5;
    leaf2->right = leaf6;

    leaf3->left = leaf7;
    leaf3->right = leaf8;
    inOrder(root);
    printf("\n");
    deleteNode(root, 40);
    inOrder(root);
    return 0;
}