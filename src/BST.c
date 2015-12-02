#include <stdlib.h>
#include <stdio.h>
#include "Node.c"
#define new(type) malloc(sizeof(type)) 

typedef struct {
	Node *root;
} BST;

BST *createBST(char *str);
void addBST(Node *src, BST *dest);
void freeBST(BST *bst);
void freeAllNodes(Node *node);
void inOrderTraversal(BST *bst);
void lvr(Node *node);

BST *createBST(char *str) {
	BST *bst = new(BST);
	bst->root = NULL;
	while(*(str++)) {
		addBST(createNode(*str), bst);
	}
	return bst;
}

void addBST(Node *src, BST *dest) {
	if(dest->root == NULL) {
		dest->root = src;
	} else {
		addNode(src, dest->root);
	}
}

void inOrderTraversal(BST *bst) {
	if(bst == NULL) {
		printf("NULL");
	} else {
		lvr(bst->root);
	}
}

void lvr(Node *node) {
	if(node == NULL) return;
	lvr(node->left);
	printf("%c", node->value);
	lvr(node->right);
}

void freeBST(BST *bst) {
	freeAllNodes(bst->root);
}

void freeAllNodes(Node *node) {
	if(node == NULL) return;
	freeAllNodes(node->left);
	freeAllNodes(node->right);
	freeNode(node);
}
