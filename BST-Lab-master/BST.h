#include "Node.h"
#include "BSTInterface.h"

#pragma once

#include "NodeInterface.h"
#include "BSTInterface.h"

using namespace std;

class BST: public BSTInterface {
protected:
	Node *root;
public:
	BST();
	virtual ~BST();
	virtual Node * getRootNode() const;
	virtual bool add(int data);
	virtual bool remove(int data);
	virtual void clear();
};