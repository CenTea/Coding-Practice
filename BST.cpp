#include <cstdlib>

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findClosestValueInBst(BST *tree, int target) {
  // Write your code here.
	int distance = abs(target - tree->value);
	int closestValue = tree->value;
	
	while(true){
		if(abs(target - tree->value) < distance){
			distance = abs(target - tree->value);
			closestValue = tree->value;
		}
		if(tree->value == target){
			return tree->value;
		}
		else if(tree->value < target){
			if(tree->right != NULL){
				tree = tree->right;
			}
			else{
				return closestValue;
			}
			
		}
		else{
			if(tree->left != NULL){
				tree = tree->left;
			}
			else{
				return closestValue;
			}
		}
	}
return -1;
}
