/***************************************************
	DO NOT MODIFY THIS FILE
	Data Structure & Algorithm Assignment 3
	Heap.h
	Purpose: Header file for the Heap class

	@author Kien Huynh
	@version 1.1 02-10-2016
***************************************************/

#ifndef HEAP_H
#define HEAP_H
#include <iostream>
using namespace std;
#define HEAP_MAX 1024

class Heap{
private:
	int *heapPtr;
	int last;
	int size;
	int maxSize;
	void ReHeapDown(int);
	void ReHeapUp(int);
	void swap(int, int);
	void PrintHeapTreeRe(int, int);
public:
	//This operator overloading allow you to access elements of the heap array easier
	//Note that you can only access elements, not change them using this operator
	int operator[](int);

	//Create heap from an int array
	bool ArrToHeap(int*, int);

	//Default constructor with no argument
	Heap();

	//Constructor that takes an array and its length
	Heap(int*, int);

	//The name is obvious enough
	bool IsEmpty();

	//The name is obvious enough, seriously
	bool IsFull();

	//Print heap as an array
	void PrintHeapLinear();

	//Print heap like a tree
	void PrintHeapTree();

	//Insert new element to a heap
	bool InsertHeap(int);
};

#endif