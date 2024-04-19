#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Declaración matriz sparse
    int a[5][5] = {{0, 0, 0, 0, 1},
                   {0, 2, 0, 0, 0},
                   {0, 0, 0, 0, 3},
                   {0, 0, 1, 0, 0},
                   {0, 2, 0, 0, 0}};

    int n = 5;
    int m = 5;

    vector<vector<int>> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != 0) {
                vector<int> temp = {i, j, a[i][j]};
                b.push_back(temp);
            }
        }
    }

    // Imprimir matriz sparse
    for (size_t i = 0; i < b.size(); i++) {
        for (size_t j = 0; j < 3; j++) {
            cout << b[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}