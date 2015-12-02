#include <stdio.h>
#include "BST.c"

int main() {
	BST *bst = createBST("alksdblkldkjvhalkjhalsjchlawefhacnzdjcnlkhfoiweyfpouweptoiu");
	inOrderTraversal(bst);
	freeBST(bst);
	return 0;
}
