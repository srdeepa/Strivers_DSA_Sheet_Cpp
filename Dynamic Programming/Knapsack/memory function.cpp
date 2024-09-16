#include <iostream>
using namespace std;

int countOperations;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int t[100][100], v[100], w[100], n, m;

int knap(int i, int j) {
    if (t[i][j] == -1) {
        if (j < w[i])
            t[i][j] = knap(i - 1, j);
        else
            t[i][j] = max(knap(i - 1, j), v[i] + knap(i - 1, j - w[i]));
    }
    return t[i][j];
}

int main() {
    cout << "No. of Items >> ";
    cin >> n;
    cout << "Sack Capacity >> ";
    cin >> m;

    cout << "Weight\tValue\n";
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    // Initialize table
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            countOperations++;
            if (i == 0 || j == 0)
                t[i][j] = 0;
            else
                t[i][j] = -1;
        }
    }

    // Compute the maximum value using memoization
    cout << "Maximum Value: " << knap(n, m) << endl;

    // Display the computation table
    cout << "Computation Table\n";
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << t[i][j] << "\t";
        }
        cout << endl;
    }

    // Display the selected items (Composition)
    cout << "Composition:\n";
    int capacity = m;
    for (int i = n; i > 0; i--) {
        if (t[i][capacity] != t[i - 1][capacity]) {
            cout << i << " ";
            capacity -= w[i];
        }
    }

    cout << "\nOperation count: " << countOperations << endl;
    return 0;
}

