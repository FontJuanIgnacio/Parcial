#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Datos de la matriz sparse almacenados en la matriz b
    vector<vector<int>> b = {{5, 5, 3},
                              {0, 4, 1},
                              {1, 1, 2},
                              {2, 4, 3},
                              {3, 2, 1},
                              {4, 1, 2}};
                              
    int n = b[0][0]; // número de filas
    int m = b[0][1]; // número de columnas

    // Inicializar matriz sparse con ceros
    vector<vector<int>> a(n, vector<int>(m, 0));

    // Rellenar matriz sparse utilizando los datos de b
    for (size_t i = 1; i < b.size(); i++) {
        int row = b[i][0];
        int col = b[i][1];
        int value = b[i][2];
        a[row][col] = value;
    }

    // Imprimir matriz sparse
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}