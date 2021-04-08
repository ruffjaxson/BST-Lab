#pragma once
#include <iostream>
#include "NodeInterface.h"

class Node: public NodeInterface {

public:
	Node();
	virtual ~Node();
	virtual int getData() const;
	virtual Node * getLeftChild() const;
	virtual Node * getRightChild() const;

};