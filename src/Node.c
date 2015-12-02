#include <stdlib.h>
#define new(type) malloc(sizeof(type))

typedef struct node_t {
	char value;
	struct node_t* left;
	struct node_t* right;
} Node;

Node *createNode(char val);
void addNode(Node *src, Node *dest);
void freeNode(Node *node);

Node *createNode(char val) {
	Node *node = new(Node);
	node->value = val;
	node->left = NULL;
	node->right = NULL;
	return node;
}

void addNode(Node *src, Node *dest) {
	if(src->value <= dest->value) {
		if(dest->left == NULL) {
			dest->left = src;
		} else {
			addNode(src, dest->left);
		}
	} else {
		if(dest->right == NULL) {
			dest->right = src;
		} else {
			addNode(src, dest->right);
		}
	}
}

void freeNode(Node *node) {
	if(node != NULL) {
		free(node);
	}
}
