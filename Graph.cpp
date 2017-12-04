/*
 * Author: Dazhia Blassingame
 * Date: 12/1/2017
 * Assignment: Program 7- Graphs
 * File: Graphs.cpp
 * Description: This file contains the definitions for the methods that will be used to implement a graph
 */
#include "Graph.h"
#include <iostream>
using namespace std;

Graph::Graph(int v) { // initializes the number of vertices to v, and fills matrix with zeros
    vertices = v;
    edges = 0;
    for(int i=0; i<v; i++){
        for(int j=0; j<v; j++){
            matrix[i][j] = 0;
        }
    }
}

void Graph::AddEdge(int v, int w) { //add an edge between v and w
    matrix[v][w] = 1;
    matrix[w][v] = 1;
    edges++;
}

void Graph::DeleteEdge(int v, int w) { //delete the edge between v and w
    matrix[v][w] = 0;
    matrix[w][v] = 0;
}

void Graph::AddWeight(int v, int w, int weight) { // add weight to edge (v, w) if edge (v, w) exists
    if(matrix[v][w] != 0) {
        matrix[v][w] == weight;
    }else{
        cout<<"There is no edge."<<endl;
    }
}

void Graph::printAdjacent(int v) { // print all vertices that are adjacent to v
    for(int i=0; i<vertices; i++){
        if(matrix[v][i] != 0)
            cout<< i <<endl;
   }
}

void Graph::printMatrix() { // print the content of the adjacency matrix with one row per line of output.
    cout<<" ";
    for(int i=0; i<vertices; i++){
        cout<< i << " ";
    }
    cout<< "\n";

    for(int j =0; j<vertices; j++){
        cout<<j<<" ";
        for(int k=0; k<vertices; k++){
            cout<<matrix[j][k]<<" ";
        }
        cout<<"\n";
    }
}
void Graph::DepthFirstSearch() {
    for(int i=0; i<vertices; i++){
        visited[i] = false;
    }
    DepthFirstSearch(0);
}
void Graph::DepthFirstSearch(int v) { //Print out vertices using depth first search starting with v.
    cout<<v<<" ";
    visited[v] = true;

    for(int i=0; i<vertices; i++){
        if(matrix[v][i] != 0 && visited[i] ==false){
            DepthFirstSearch(i);
        }
    }
}

void Graph::BreadthFirstSearch() {
    for(int i=0; i<vertices; i++){
        visited[i] = false;
    }
    BreadthFirstSearch(0);
}

void Graph::BreadthFirstSearch(int v) {
    cout<<v<<" ";
    visited[v] = true;

    for(int i=0; i<vertices; i++){
        if(matrix[v][i] != 0 && visited[i] ==false){
            cout << i << " ";
            visited[i] = true;
        }
    }
}

bool Graph::Completeness(int vertices) {
    if(edges == (vertices*(vertices-1))/2){
        cout<<"graph is complete" <<endl;
        return true;
    }else{
        cout<<"graph is not complete"<<endl;
        return false;
    }
}