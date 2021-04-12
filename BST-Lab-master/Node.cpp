#include "Node.h"
#include <iostream>
#include "BST.h"

// Node::Node(){
// 	cout << "In Node Constructor" << endl;
// }
Node::~Node(){
	cout << "In Node Destructor" << endl;
}

/*
* Returns the data that is stored in this node
*
* @return the data that is stored in this node.
*/
int Node::getData() const {
	return data;
}

/*
* Returns the left child of this node or null if it doesn't have one.
*
* @return the left child of this node or null if it doesn't have one.
*/
Node * Node::getLeftChild() const{
	return leftChild;
}

/*
* Returns the right child of this node or null if it doesn't have one.
*
* @return the right child of this node or null if it doesn't have one.
*/
Node * Node::getRightChild() const{
	return rightChild;
}