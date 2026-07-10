#include <iostream>
#include <climits>
using namespace std;

const int V = 5; // graph has 5 vertices

struct Node {
    int vertex; // store number of connected vertex
    int weight; // store weightage
    Node* next; }; // store address of the next node in linked list

Node* graph[V] = {nullptr}; // create an array of 5 linked list pointers

// Function adds connection btwn 2 vertices
// from - starting vertex, to - ending vertex & weight - distance btwn them
void addEdge(char from, char to, int weight) {
    int u = from - 'A';
    int v = to - 'A';

    graph[u] = new Node{v, weight, graph[u]}; // creates a new node for connection from u to v
    graph[v] = new Node{u, weight, graph[v]}; } // does the opposite

void dijkstra(char source) { // soruce is the starting vertex
    int distance[V]; // creates an array that stores the shortest know distance from the source to every vertex
    bool visited[V] = {false}; // creates an array that records whether each vertex has been visited

    for (int i = 0; i < V; i++)
        distance[i] = INT_MAX; // sets every distance to infinity (cuz shortest distance unknown yet)

    distance[source - 'A'] = 0; // sets the source vertex distance to 0

    for (int i = 0; i < V; i++) {
        int current = -1; // -1 means no vertex selected yet

        for (int j = 0; j < V; j++) { // checks every vertex to find the unvisited vertex with the smallest distance.
            if (!visited[j] &&
                (current == -1 || distance[j] < distance[current])) {
                current = j; } }

        if (current == -1)
            break;

        visited[current] = true; // marks selected vertex as visited

        Node* temp = graph[current];

        while (temp != nullptr) {
            int neighbour = temp->vertex;

            if (distance[current] != INT_MAX &&
                distance[current] + temp->weight < distance[neighbour]) {
                distance[neighbour] =
                    distance[current] + temp->weight;}

            temp = temp->next; } } // moves to the next neighbour in linked list

    for (int i = 0; i < V; i++)
        cout << distance[i] << " "; }

int main() {
    addEdge('A', 'B', 4);
    addEdge('A', 'C', 8);
    addEdge('B', 'C', 3);
    addEdge('B', 'E', 6);
    addEdge('C', 'D', 2);
    addEdge('D', 'E', 10);

    dijkstra('A');

return 0;}