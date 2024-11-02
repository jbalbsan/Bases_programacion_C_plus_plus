#include <iostream>
#include "Declara_funcion.h"

int main() {
    int a, b;
    std::cout << "Introduce el 1º número: ";
    std::cin >> a;
    std::cout << "Introduce el 2º número: ";
    std::cin >> b;

    int resultado = suma(a, b);      // Llama a la función suma y almacena el resultado
    mostrarResultado(resultado);     // Llama al procedimiento para mostrar el resultado

    // Llamada al procedimiento para demostrar variables locales
    variablesLocales();

    // Llamada a la función con número variable de argumentos
    int numValores;
    std::cout << "¿Cuántos números enteros quieres sumar? ";
    std::cin >> numValores;

    // Inicializa un array para almacenar los números
    int* numeros = new int[numValores]; // Aloca memoria para los números

    std::cout << "Introduce " << numValores << " números enteros:" << std::endl;
    for (int i = 0; i < numValores; i++) {
        std::cout << "Número " << (i + 1) << ": ";
        std::cin >> numeros[i]; // Recoge los números del usuario
    }

    // Llama a la función con número variable de argumentos usando el puntero
    int sumaTotal = sumaVariable(numValores, numeros);
    std::cout << "El resultado de la suma (int) es: " << sumaTotal << std::endl;

    delete[] numeros; // Libera la memoria alocada
    return 0;
}
