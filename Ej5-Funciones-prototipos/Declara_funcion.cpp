#include "Declara_funcion.h"
#include <iostream>

// Implementación de la función que devuelve la suma de dos números
int suma(int x, int y) {
    return x + y;
}

// Implementación del procedimiento que muestra el resultado
void mostrarResultado(int resultado) {
    std::cout << "El resultado de la suma es: " << resultado << std::endl;
}

// Implementación del procedimiento que muestra la gestión de variables locales
void variablesLocales() {
    int localVariable = 10; // Variable local
    std::cout << "Valor de la variable local: " << localVariable << std::endl;
    localVariable++; // Modifica la variable local
    std::cout << "Valor de la variable local después de incrementar: " << localVariable << std::endl;
}

// Implementación de la función con número variable de argumentos
int sumaVariable(int count, int* nums) {
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += nums[i];
    }
    return total;
}
