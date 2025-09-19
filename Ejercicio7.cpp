#include <iostream>
#include <vector>

// Función para imprimir los elementos de un vector
void imprimirArreglo(const std::vector<int>& arr) {
    for (int elemento : arr) {
        std::cout << elemento << " ";
    }
    std::cout << std::endl;
}

// Función que implementa el algoritmo de ordenamiento de burbuja
void ordenamientoBurbuja(std::vector<int>& arr) {
    int n = arr.size();
    bool intercambio; // Una bandera para optimizar el algoritmo

    // Bucle para recorrer todo el arreglo
    for (int i = 0; i < n - 1; ++i) {
        intercambio = false;

        // Bucle para comparar y mover el elemento más grande a su posición final
        for (int j = 0; j < n - i - 1; ++j) {
            // Compara el elemento actual con el siguiente
            if (arr[j] > arr[j + 1]) {
                // Si el elemento actual es mayor, se intercambian
                std::swap(arr[j], arr[j + 1]);
                intercambio = true; // Se marca que hubo un intercambio
            }
        }

        // Si en una pasada completa no hubo intercambios,
        // el arreglo ya está ordenado y podemos terminar.
        if (!intercambio) {
            break;
        }
    }
}

int main() {
    // Definimos un arreglo
    std::vector<int> numeros = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "Arreglo original: ";
    imprimirArreglo(numeros);

    // Llamamos a la función para ordenarlo
    ordenamientoBurbuja(numeros);

    std::cout << "Arreglo ordenado: ";
    imprimirArreglo(numeros);

    return 0;
}