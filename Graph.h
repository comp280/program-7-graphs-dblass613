/*
 * Author: Dazhia Blassingame
 * Date: 12/1/2017
 * Assignment: Program 7- Graphs
 * File: Graphs.h
 * Description: This file contains the definitions for the methods that will be used to implement a graph
 */

#include <iostream>
using namespace std;
    const int MAX = 100;
    class Graph
    {

    private:
        int vertices; // number of vertices 
        int edges; //number of edges
        int matrix[MAX][MAX];//adjacency matrix 
        bool visited[MAX];

    public:
        Graph(int v); // initializes the number of vertices to v, and fills matrix with zeros
        void AddEdge(int v, int w); //add an edge between v and w
        void DeleteEdge(int v, int w); //delete the edge between v and w
        void AddWeight(int v, int w, int weight); // add weight to edge (v, w) if edge (v, w) exists.
         void printAdjacent(int v); // print all vertices that are adjacent to v
        void printMatrix(); // print the content of the adjacency matrix with one row per line of output.
        void DepthFirstSearch(); //Print out vertices using depth first search.
        void DepthFirstSearch(int v); // recursive method to Print out vertices using depth first search.
        void BreadthFirstSearch(); //Print out vertices using breadth first search.
        void BreadthFirstSearch(int v); //Print out vertices using breadth first search.
        bool Completeness(int vertices); //check to see if graph is complete

    };


