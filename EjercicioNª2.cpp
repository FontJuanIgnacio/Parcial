#include <iostream>

// Tamaño de la matriz cuadrada
const int tamano = 3;

int main() {
    // Declaración de la matriz cuadrada de numeros enteros
    int matriz[tamano][tamano] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Recorrido de la matriz cuadrada de numeros enteros y mostrar los números por consola
    std::cout << "Matriz cuadrada:\n";
    for (int i = 0; i < tamano; ++i) {
        for (int j = 0; j < tamano; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}