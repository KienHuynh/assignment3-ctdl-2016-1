/***************************************************
	DO NOT MODIFY THIS FILE
	Data Structure & Algorithm Assignment 3
	Node.h
	Purpose: Header file for the Node class

	@author Kien Huynh
	@version 1.0 03-10-2016
***************************************************/

#ifndef NODE_H
#define NODE_H
#include <iostream>
// Create enumeration to indicate node balance
enum { LEFT, EQUAL, RIGHT };

class Node {
public:
	int data;
	Node* left;
	Node* right;
	int balance;

	//Default constructor
	Node();

	//Constructor that takes an integer as node data
	Node(int);

	//Print the tree from this node
	void PrintNode(int indent = 0);
};

#endif