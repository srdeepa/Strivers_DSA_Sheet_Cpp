#include <iostream>
#include <fstream>
using namespace std;

int graph[40][40], n, count = 0;

void createGraph() {
    cout << "No. of vertices>> ";
    cin >> n;
    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
}

int main() {
    createGraph();

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                count++;
                if (graph[i][k] + graph[k][j] < graph[i][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }

    cout << "Applying Floyd's Algorithm\n";
    cout << "All Pair Shortest Path Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Operation Count: " << count << endl;
    return 0;
}
