#include <iostream>
#include "AVLTree.h"
#include "Heap.h"
#include "Graph.h"
#include "InputReader.h"
using namespace std;

void testAVL() {
	int arr[5] = { 1, 3, 3, 4, 5 };
	
	AVLTree tree = AVLTree::ArrayToAVL(arr, 5);
	cout << tree.root->HasNode(4) << endl;
	tree.PrintAVL();
	tree.AVLDelete(3);
	tree.PrintAVL();
	tree.AVLDelete(3);
	tree.PrintAVL();
	tree.AVLDelete(1);
	tree.PrintAVL();
	tree.AVLDelete(4);
	tree.PrintAVL();
	tree.AVLDelete(5);
}

void testHeap() {
	const int arr_size = 5;
	int arr[arr_size] = { 7, 8, 2, 33, 5};
	Heap heap = Heap(arr, arr_size);
	heap.PrintHeapTree();
	heap.InsertHeap(44);
	heap.PrintHeapTree();
	int dataOut = 1;
	cout << heap.DataExist(33) << endl;
	heap.DeleteHeap(dataOut);
	cout << endl << endl;
	heap.PrintHeapTree();
	heap.DeleteHeap(dataOut);
	cout << endl << endl;
	heap.PrintHeapTree();
	
	heap.DeleteHeap(dataOut);
	cout << endl << endl;
	heap.PrintHeapTree();
	heap.DeleteHeap(dataOut);
	cout << endl << endl;
	heap.PrintHeapTree();
	heap.DeleteHeap(dataOut);

	heap.PrintHeapTree();
	heap.DeleteHeap(dataOut);
	cout << heap.DataExist(45) << endl;

	/*Heap* heap = new Heap;
	heap->InsertHeap(3);
	heap->InsertHeap(5);
	heap->InsertHeap(33);
	heap->InsertHeap(4);
	heap->InsertHeap(7);

	heap->PrintHeapTree();

	int dataOut = 1;
	heap->DeleteHeap(dataOut);
	cout << endl << endl;
	heap->PrintHeapTree();
	heap->DeleteHeap(dataOut);
	cout << endl << endl;
	heap->PrintHeapTree();
	heap->DeleteHeap(dataOut);
	cout << endl << endl;
	heap->PrintHeapTree();
	heap->DeleteHeap(dataOut);
	cout << endl << endl;
	heap->PrintHeapTree();
	heap->DeleteHeap(dataOut);
	cout << endl << endl;
	heap->PrintHeapTree();
	heap->DeleteHeap(dataOut);
	cout << endl << endl;
	heap->PrintHeapTree();*/
}

void testGraph() {
	Vertex v1(1);
	Graph g(&v1);
	Vertex v2(2);
	g.InsertVertex(&v2);
	Vertex v3(3);
	g.InsertVertex(&v3);
	Vertex v4(1);
	g.InsertVertex(&v4);
	g.InsertVertex(1);
	g.InsertVertex(5);
	Edge* e1 = new Edge(&v3);
	Edge* e2 = new Edge(&v2);
	g.InsertEdge(&v1, e1);
	g.InsertEdge(&v1, e2);
	g.InsertEdge(&v2, e1);
	g.InsertEdge(1, 3);
	g.InsertEdge(&v1, &v3);
	g.InsertEdge(1, 1);
}

int main() {
	testHeap();
}