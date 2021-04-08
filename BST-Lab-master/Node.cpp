#include "Node.h"
#include <iostream>
#include "BST.h"

Node::Node(){
	cout << "In Node Constructor" << endl;
}
Node::~Node(){
	cout << "In Node Destructor" << endl;
}

/*
* Returns the data that is stored in this node
*
* @return the data that is stored in this node.
*/
int Node::getData() const {
	cout << "In Node getData" << endl;
}

/*
* Returns the left child of this node or null if it doesn't have one.
*
* @return the left child of this node or null if it doesn't have one.
*/
Node * Node::getLeftChild() const{
	cout << "In Node getLeftChild" << endl;
}

/*
* Returns the right child of this node or null if it doesn't have one.
*
* @return the right child of this node or null if it doesn't have one.
*/
Node * Node::getRightChild() const{
	cout << "In Node getRightChild" << endl;
}