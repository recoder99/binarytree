#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

//A function for creating node
struct Node *createNode(int data){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right= NULL;
    return newNode;
}

void insert(struct Node *node, int data){
    if (node==NULL){
        node = createNode(data); //if node is empty
    }else if (data > node->data){
        insert(node->right, data); //if data is greater than the node->data 
    }else if (data <= node->data){
        insert(node->left, data); //if data is less than the node->data
    }
}