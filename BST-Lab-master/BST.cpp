#include "BST.h"
#include "Node.h"



BST::BST(){
	cout << "In BST Constructor" << endl;
}

BST::~BST(){
	cout << "In BST Destructor" << endl;
}

//Please note that the class that implements this interface must be made
//of objects which implement the NodeInterface

/*
* Returns the root node for this tree
*
* @return the root node for this tree.
*/
Node * BST::getRootNode() const{
	cout << "In BST getRootNode" << endl;
}

/*
* Attempts to add the given int to the BST tree
*
* @return true if added
* @return false if unsuccessful (i.e. the int is already in tree)
*/
bool BST::add(int data){
	cout << "In BST add" << endl;

	
}

/*
* Attempts to remove the given int from the BST tree
*
* @return true if successfully removed
* @return false if remove is unsuccessful(i.e. the int is not in the tree)
*/
bool BST::remove(int data){
	cout << "In BST remove" << endl;
	return false;
}

/*
* Removes all nodes from the tree, resulting in an empty tree.
*/
void BST::clear(){
	cout << "In BST clear" << endl;
	
}