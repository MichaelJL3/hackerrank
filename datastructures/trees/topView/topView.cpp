
/*
    SOLVED: 12/30/2016

    will not compile:
    method only solution
*/

void left_view(node* root){
    if(root){
        left_view(root->left);
        printf("%d ", root->data);
    }
}

void right_view(node* root){
    if(root){
        printf("%d ", root->data);
        right_view(root->right);
    }
}

void top_view(node* root){
    if(root){
        left_view(root->left);
        printf("%d ", root->data);
        right_view(root->right);
    }
}
