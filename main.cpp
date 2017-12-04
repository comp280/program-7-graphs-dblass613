#include <iostream>
#include "Graph.h"

int main() {
    int vertices;
    cout<<"How many vertices does your graph consist of?"<<endl;
    cin>>vertices;
    Graph clientGraph = Graph(vertices);
    int option;
    int input=0;
    int input2 =0;
    int weight =0;

    do {
        cout<<"Choose an Option: \n 1:Insert an edge \n 2:Delete an edge \n 3:Add weight to an edge \n"
                " 4:Print Adjancency Matrix \n 5:List all vertices that are adjacent to a specified vertex. \n "
                "6:Print out vertices using depth first search. \n 7:Print out vertices using breadth first search. \n 8:Check for completeness"
                "9: Exit program "<<endl;
        cin>> option;
        switch (option) {
            case 1:
                cout << "Enter first vertex" << endl;
                cin >> input;
                cout<<"Enter the second vertex" << endl;
                cin>>input2;
                if (input >= vertices || input2 >= vertices) {
                    cout << "Enter another vertex" << endl;
                    break;
                } else {
                    clientGraph.AddEdge(input, input2);
                }
                break;
            case 2:
                cout << "Enter first vertex" << endl;
                cin >> input;
                cout<<"Enter the second vertex" << endl;
                cin>>input2;
                if (input >= vertices || input2 >= vertices) {
                    cout << "Enter another vertex" << endl;
                    break;
                } else {
                    clientGraph.DeleteEdge(input, input2);
                }
                break;
            case 3:
                cout << "Enter first vertex" << endl;
                cin >> input;
                cout<<"Enter the second vertex" << endl;
                cin>>input2;
                cout<<"Enter the weight"<<endl;
                cin >>weight;
                if (input >= vertices || input2 >= vertices) {
                    cout << "Enter another vertex" << endl;
                    break;
                } else {
                    clientGraph.AddWeight(input, input2, weight);
                }
                break;
            case 4:
                clientGraph.printMatrix();
                break;
            case 5:
                cout << "Enter the vertex"<< endl;
                cin>>input;
                if (input >= vertices) {
                    cout << "Enter another vertex" << endl;
                    break;
                } else {
                    clientGraph.printAdjacent(input);
                }
                break;
            case 6:
                clientGraph.DepthFirstSearch();
                break;
            case 7:
                clientGraph.BreadthFirstSearch();
                break;
            case 8:
                clientGraph.Completeness(vertices);
                break;
            case 9:
                exit(0);
        }
    }while(option!=9);
}
