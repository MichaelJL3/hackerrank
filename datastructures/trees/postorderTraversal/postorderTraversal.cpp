
/*
	SOLVED: 12/30/2016

	will not compile:
	method only solution
*/

void postOrder(node *root) {
    if(root){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}