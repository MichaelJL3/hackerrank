
/*
	SOLVED: 12/30/2016

	will not compile:
	method only solution
*/

void inOrder(node *root) {
    if(root){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}