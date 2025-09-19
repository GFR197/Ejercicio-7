import java.util.Arrays;

public class Ejercicio7 {

    // Función que implementa el algoritmo de ordenamiento de burbuja
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        boolean intercambio; // Bandera para optimizar

        // Bucle externo para recorrer todo el arreglo
        for (int i = 0; i < n - 1; i++) {
            intercambio = false;

            // Bucle interno para las comparaciones y movimientos
            // El -i-1 es porque los últimos 'i' elementos ya están ordenados
            for (int j = 0; j < n - i - 1; j++) {
                // Compara el elemento actual con el siguiente
                if (arr[j] > arr[j + 1]) {
                    // Si el elemento actual es mayor se intercambian
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    
                    intercambio = true; // Se marca que hubo un cambio
                }
            }

            if (!intercambio) {
                break;
            }
        }
    }

    
    public static void main(String[] args) {
        // Definimos un arreglo desordenado
        int[] numeros = {64, 34, 25, 12, 22, 11, 90};

        System.out.println("Arreglo original: " + Arrays.toString(numeros));

        // Llamamos al método para ordenarlo
        bubbleSort(numeros);

        System.out.println("Arreglo ordenado: " + Arrays.toString(numeros));
    }
}