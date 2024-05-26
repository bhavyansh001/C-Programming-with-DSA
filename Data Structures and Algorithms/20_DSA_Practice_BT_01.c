#include <stdio.h>
#include <stdlib.h>     //#include<malloc.h>

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

void preOrder(struct node* root){
    if(root != NULL){
        printf("%d\t", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct node* root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d\t", root->data);
    }
}

void inOrder(struct node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d\t", root->data);
        inOrder(root->right);
    }
}

int isBST(struct node* root){   //Mimicking inorder traveral
    static struct node* prev = NULL;   //The parent node, since root has no parent so = NULL initially. Made static so that prev = NULL just for root and never again for the subtrees
    if(root != NULL){           //Also the base case for recursion to stop
        if(!isBST(root->left)){
            return 0;
        }
        if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;               //As an empty tree is always a BST
    }
}

struct node* search(struct node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key == root->data){
        return root;
    }
    else if(key < root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}
//Iterative search
struct node* searchItr(struct node* root, int key){
    while(root != NULL){
    if(root == NULL){
        return NULL;
    }
    if(key == root->data){
        return root;
    }
    else if(key < root->data){
        root = root->left;
    }
    else{
        root = root->right;
    }
}
    return NULL;
}

int main(){
    // struct node* root = createNode(50);                          /*                               50                    */
    //                                                              /*                              /  \                   */
    // struct node* leaf1 = createNode(10);                         /*                             /    \                  */
    // struct node* leaf2 = createNode(20);                         /*                            10    20                 */
    //                                                              /*                           / \   /  \                */
    // struct node* leaf3 = createNode(30);                         /*                          /   \ 35   25              */
    // struct node* leaf4 = createNode(40);                         /*                         30    40                    */
    //                                                              /*                        /  \                         */
    // struct node* leaf5 = createNode(35);                         /*                       15   20                       */
    // struct node* leaf6 = createNode(25);

    // struct node* leaf7 = createNode(15);
    // struct node* leaf8 = createNode(20);

    //BST
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


    //Linking the nodes of tree
    root->left = leaf1;
    root->right = leaf2;

    leaf1->left = leaf3;
    leaf1->right = leaf4;

    leaf2->left = leaf5;
    leaf2->right = leaf6;

    leaf3->left = leaf7;
    leaf3->right = leaf8;

    
    // preOrder(root);
    // printf("\n");
    // postOrder(root);
    // printf("\n");
    inOrder(root);

    // if(isBST(root)){
    //     printf("The tree is BST");
    // }
    // else{
    //     printf("This is NOT a BST");
    // }

    struct node* n = searchItr(root, 15);
    if(n!=NULL){
    printf("Found: %d", n->data);
    }
    else{
        printf("Element not found");
    }
    return 0;
}