#include <iostream>
#include <vector>
#include <string>

int main() {
    // Declarar un vector de strings para almacenar los nombres
    std::vector<std::string> nombres = {"Maria", "Rosa", "Catalina", "Ramiro", "Susana", "Matilde", "Juan"};
    
    // Imprimir los nombres almacenados en el vector
    std::cout << "Los nombres almacenados en el vector son:\n";
    for (const auto& nombre : nombres) {
        std::cout << nombre << std::endl;
    }
    
    return 0;
}