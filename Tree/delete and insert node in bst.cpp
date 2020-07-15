#include <iostream>
using namespace std;
typedef long long ll;

struct bst{
    ll data, pos;
    bst *left, *right;
};

typedef struct bst bst;

bst* getnode(ll data,ll pos){
    bst *node = new bst;
    node->data = data;
    node->pos = pos;
    node->left = NULL;
    node->right = NULL;
    return node;
}
bst* insert(bst *root, ll element, ll pos){
    if(root == NULL){
        printf("%lld\n", pos);
        root = getnode(element, pos);
    }else{
        if(element >= root->data){
            root->right = insert(root->right, element, (pos*2) + 1);
        }else{
            
            root->left = insert(root->left, element, pos*2);
        }
    }
    
    return root;
}

bst* findmin(bst *current){
    
    while(current->left != NULL){
        current = current->left;
    }
    return current;
}

bst* delete_(bst *root, ll element){
    if(root == NULL) return root;
    else if(element < root->data) root->left = delete_(root->left, element);
    else if(element > root->data) root->right = delete_(root->right, element);
    else{
        if(root->left == NULL){
            bst *temp = root->right;
            delete(root);
            root = temp;
        }else if(root->right == NULL){
            bst *temp = root->left;
            delete(root);
            root = temp;
        }else{
            bst *temp = findmin(root->right);
            root->data = temp->data;
            root->right = delete_(root->right, temp->data);
        }
    }
    
    return root;
}

int position(bst *root, ll element){
	if(root == NULL)
	return 0;
	
	if(root->data > element){
		position(root->left,element);
	}
	else if(root->data < element){
		position(root->right,element);
	}
	else {
	    printf("%lld\n", root->pos);
	    return 1;
	}
}

int main() {
  ll q;
  scanf("%lld ", &q);
  
  bst *root = NULL;
  
  while(q--){
      char id;
      ll element;
      scanf("%c ", &id);
      scanf("%lld ", &element);
      
      if(id == 'i'){
          root = insert(root, element, 1);
      }
	  else
	  {
	  	
          if(position(root, element))
              root = delete_(root, element);
      }
  }
  
  return 0;
}
