
/*
	SOLVED: 12/30/2016

	will not compile:
	method only solution
*/

int height(Node* root) {
    if(root){
        int left=height(root->left);
        int right=height(root->right);
        return(left>right?left+1:right+1);
    }
    return -1;
}