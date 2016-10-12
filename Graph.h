/***************************************************
	DO NOT MODIFY THIS FILE
	Data Structure & Algorithm Assignment 3
	Graph.h
	Purpose: Header file for the Graph class

	@author Kien Huynh
	@version 1.1 05-10-2016
***************************************************/

#ifdef __GNUC__
#define DEPRECATED(func) func __attribute__ ((deprecated))
#elif defined(_MSC_VER)
#define DEPRECATED(func, message) __declspec(deprecated(message)) func
#else
#pragma message("WARNING: UNKNOWN COMPILER")
#define DEPRECATED(func) func
#endif

#ifndef GRAPH_H
#define GRAPH_H
#include <cassert>
#include <iostream>
using namespace std;

//For circular usage
class Edge;

//This ADT is actually just a linked list
//Note that two vertices are connected by nextVertex DOESN'T MEAN
//that they are connected in the graph G
class Vertex {
public:
	int data;
	int inDegree;
	int outDegree;

	Vertex* nextVertex;
	Edge* firstEdge;

	//Indicate if this vertex has been processed
	bool processed;

	//Default constructor
	Vertex();

	//Constructor that takes data
	Vertex(int);
};

//Linked list that contains Edges from a Vertex to other Vertices
//This class helps we to connect Vertices in a graph
class Edge {
private:
	
public:
	Vertex* destination;
	Edge* nextEdge;

	//Default constructor
	//This is illegal because and Edge should always come with a destination
	//Use the other constructor instead
	DEPRECATED(Edge(), "Constructor error, an Edge should always come with a destination (Vertex), try the other constructor instead");

	//Constructor that takes a Vertex as the destination
	Edge(Vertex*);
};

class Graph {
private:
	//The first Vertex to be added in the Graph structure
	Vertex* gHead; 
	int size;

	//Helper function to avoid dup codes
	//does not check if from or to exist, should only be called from the public counterparts
	bool InsertEdgeFromVertices(Vertex* from, Vertex* to);

public:
	//Default constructor
	Graph();

	//Constructor that takes a Vertex pointer as gHead
	Graph(Vertex*);

	//Insert new Vertex into the graph
	bool InsertVertex(Vertex*);

	//Insert new Vertex using int data instead of Vertex*
	bool InsertVertex(int);

	//Get Vettex* from an int data
	Vertex* GetVertex(int);

	//Insert new Edge into the graph using 2 Vertex
	bool InsertEdge(Vertex* from, Vertex* to);

	//Create an Edge betweem two notes with [fromData] and [toData]
	bool InsertEdge(int fromData, int toData);

	//Insert new Edge into the graph using a Vertex and an Graph
	bool InsertEdge(Vertex* from, Edge* from_to);

	//Check if a Vertex exists in the graph
	bool VertexExist(Vertex* v);

	//Check if a Vertex exists in the graph using the Vertex data
	bool VertexExist(int vData);
};

#endif