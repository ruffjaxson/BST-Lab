#pragma once
#include "NodeInterface.h"
using namespace std;

class Node: public NodeInterface {	
protected: 
Node *leftChild;
Node *rightChild;
int data;
public:
	
	Node(int value) {data = value; leftChild = NULL; rightChild = NULL;}
	~Node();
	int getData() const;
	Node *getLeftChild() const;
	Node *getRightChild() const;
	Node *&getRight();
  Node *&getLeft();
	void setLeftChild(Node *ptr);
  void setRightChild(Node *ptr);

	friend class BST;
};