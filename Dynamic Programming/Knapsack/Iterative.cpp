#include <iostream>
#include <fstream>
using namespace std;

int countOperations;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int t[100][100], v[100], w[100], n, m, i, j;


    cout << "No. of Items >> ";
    cin >> n;
    cout << "Sack Capacity >> ";
    cin >> m;

    cout << "Weight\tValue\n";
    for (i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= m; j++) {
            countOperations++;
            if (i == 0 || j == 0)
                t[i][j] = 0;
            else if (j < w[i])
                t[i][j] = t[i-1][j];
            else
                t[i][j] = max(t[i-1][j], v[i] + t[i-1][j - w[i]]);
        }
    }

    // Display the computation table
    cout << "COMPUTATION table\n";
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= m; j++) {
            cout << t[i][j] << "\t";
        }
        cout << endl;
    }

    // Display the maximum value and the selected items
    cout << "Maximum Value: " << t[n][m] << endl;

    cout << "Composition:\n";
    for (i = n; i > 0; i--) {
        if (t[i][m] != t[i-1][m]) {
            cout << i << " ";
            m = m - w[i];
        }
    }

    cout << "\nOperation count: " << countOperations << endl;
   
    return 0;
}
