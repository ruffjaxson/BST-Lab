#include "BST.h"
#include "Node.h"



BST::BST(){
	cout << "In BST Constructor" << endl;
}



//Please note that the class that implements this interface must be made
//of objects which implement the NodeInterface

/*
* Returns the root node for this tree
*
* @return the root node for this tree.
*/
NodeInterface * BST::getRootNode() const{
	return root;
}

/*
* Attempts to add the given int to the BST tree
*
* @return true if added
* @return false if unsuccessful (i.e. the int is already in tree)
*/
bool BST::add(const int data){
	return add(data,  this->root);
}

bool BST::add(const int data, Node *&local_root){
	if (local_root == NULL){
		local_root = new Node(data);
		return true;
	}
	else {
		if (data < local_root->data)
			return add(data, local_root->leftChild);
		else if (local_root->data < data)
			return add(data, local_root->rightChild);
		else {
			cout << "Already in tree. I will NOT add" << endl;
			return false;
		}
	}
}

/*
* Attempts to remove the given int from the BST tree
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/
bool BST::remove(int data){
	cout << "Going to remove " << data << endl;
	return remove(this->root, data); //Good job
}

bool BST::remove(Node*& local_root, int data){
	if (local_root == NULL){
		cout << "Can't remove, tree is empty" << endl;
		return false;
	} else {
		if (data < local_root->data){
			cout << "Looking left for " << data << endl;
			return remove(local_root->leftChild, data);
		}
		else if (local_root->data < data){
			cout << "Looking right for " << data << endl;
			return remove(local_root->rightChild, data);
		}
		else {
			cout << "Found " << data << endl;
			Node* old_root = local_root;
			if (local_root->leftChild == NULL){
				local_root = local_root->rightChild;
			}
			else if (local_root->rightChild == NULL){
				local_root = local_root->leftChild;
			}
			else {
				//FOUND MATCH
				Node* old_root = local_root;
				if (local_root->leftChild == NULL){
					local_root = local_root->rightChild;
					delete old_root;
				}
				else if (local_root->rightChild == NULL){
					local_root = local_root->leftChild;
					delete old_root;
				}
				else{				
					replaceParent(old_root, local_root->leftChild);
					return true;
				}
			}
			
		}
	}
}

void BST::replaceParent(Node *&old_root, Node *& local_root){
	//go rightChild
	if(local_root->rightChild != NULL){
		replaceParent(old_root, local_root->rightChild);
	}
	else {
		cout << "Rightmost = " << local_root->getData() << endl;
		old_root-> data = local_root->data;
		remove(old_root->leftChild, local_root->data);
	}
}
/*
* Removes all nodes from the tree, resulting in an empty tree.
*/
void BST::clear(){
	cout << "In BST clear" << endl;
	recursiveClear(this->root);
	this->root = NULL;
}

void BST::recursiveClear(Node *node){
	if (node != NULL){
		recursiveClear(node->leftChild);
		recursiveClear(node->rightChild);
		delete node;
	}
}