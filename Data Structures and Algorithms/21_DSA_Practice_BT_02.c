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

void inOrder(struct node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d\t", root->data);
        inOrder(root->right);
    }
}

void insert(struct node* root, int key){
    struct node* prev = NULL;
    while(root != NULL){
        prev = root;
        if(key == root->data){
            printf("Already exists, cannot insert");
            return;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct node* new = createNode(key);
    if(key < prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
}

int main(){

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
    insert(root, 10);
    inOrder(root);
    printf("\nThe element is: %d", root->left->left->left->left->data);
    return 0;
}