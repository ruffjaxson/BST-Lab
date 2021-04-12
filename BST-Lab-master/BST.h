#pragma once
#include "Node.h"
#include "BSTInterface.h"
using namespace std;

class BST: public BSTInterface {
protected:
	Node *root;
private: 
	bool add(int data, Node *&node);
	void recursiveClear(Node *node);
public:
	BST();
	~BST() {clear();}
	NodeInterface * getRootNode() const;
	bool add(const int data);
	bool remove(int data);
	bool remove(Node*& local_root, int data);
	void replaceParent(Node *&old_root, Node *& local_root);
	void clear();
};