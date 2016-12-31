
/*
	SOLVED: 12/30/2016

	will not compile:
	method only solution
*/

void preOrder(node *root) {
    if(root){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}