#include <stdio.h>
#include "BST.c"

int main() {
	BST *bst = createBST("ihfloawhclkjawehliavasldivfhelvhaksjdhalibwf");
	inOrderTraversal(bst);
	freeBST(bst);
	return 0;
}
