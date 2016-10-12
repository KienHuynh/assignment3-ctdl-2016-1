//=====================================//s
//AVLTree.h by Kien Huynh
//Date: 02/10/16
//Don't modify this file
//=====================================//

#ifndef AVLTREE_H
#define ALVTREE_H
#include <iostream>
#include "Node.h"
using namespace std;

class AVLTree {
private:
	void RotateRight();
	void RotateLeft();
	void LeftBalance(bool& taller);
	void RightBalance(bool& taller);
	Node* Insert(Node* newNode, bool& taller);
	void DeleteRightBalance(bool& shorter);
	void DeleteLeftBalance(bool& shorter);
	Node* Delete(int delData, bool& shorter, bool& success);

public:
	Node* root;

	//Default constructor
	AVLTree();

	//Constructor that takes a Node* pointer as a root
	AVLTree(Node* _root);

	//Insert new node into the tree
	void AVLInsert(Node* newPtr);

	//Delete a note with given data
	bool AVLDelete(int delData);

	//Print AVL
	void PrintAVL();

	//Convert an array to AVL by iterating through the array from [0] to [length-1]
	static AVLTree ArrayToAVL(int arr[], int length);

	//The name is obvious enough
	bool IsEmpty();
};

#endif