#include <stdio.h>
#include <stdlib.h>

struct Node{
    int key;
    struct Node* left;
    struct Node* right;
    int height;     //for ease in finding absolute Balance Factor
};

int getHeight(struct Node* root){
    if(root == NULL){
        return 0;
    }
    return root->height;
}
struct Node* createNode(int key){
    struct Node* node = (struct Node *) malloc(sizeof(struct Node));

    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}
int getBalanceFactor(struct Node* n){
    if(n == NULL){
        return 0;       //0 as BF will be zero for a leaf node
    }
    return getHeight(n->left) - getHeight(n->right);
}

int max (int a, int b){
    return (a>b)?a:b;
}

struct Node* rightRotate(struct Node* y){
    //the tree is-    y
                // x    T3
           //   T1  T2 
    struct Node* x = y->left;       //declared that the node at left of y(parameter received) is x
    struct Node* T2 = x->right;     //declared because it's position will change
 
    x->right = y;
    y->left = T2;
    //heights have changed-(height of T3 not required so not updated)
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;       //height will be the maximum height of either of its children
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
 
    return x;       //returned root node
}

struct Node* leftRotate(struct Node* x){        //Rotated around x, x is the unbalanced node
//the tree is-    x
            // T1    y
            //    T2  T3
    struct Node* y = x->right;      //declaring first
    struct Node* T2 = y->left;
 
    y->left = x;
    x->right = T2;
 
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
 
    return y;
}

struct Node* insert(struct Node* node, int key){
    if (node == NULL)
        return  createNode(key);
 
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    //this is running not for root but for leaf node where insertion is to take place
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);
 
    // Left Left Case
        if(bf > 1 && key < node->left->key){
            return rightRotate(node);
        }
    // Right Right Case
        if(bf < -1 && key > node->right->key){
            return leftRotate(node);
        }
    // Left Right Case
    if(bf > 1 && key > node->left->key){
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    // Right Left Case
    if(bf < -1 && key < node->right->key){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    return node;
}
void preOrder(struct Node *root){
    if(root != NULL){
        printf("%d\t", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    struct Node* root = NULL;

    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);

    preOrder(root);
    return 0;
}