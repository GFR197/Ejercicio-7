using System;

class Programa
{
    // Función que implementa el algoritmo de ordenamiento de burbuja
    public static void OrdenamientoBurbuja(int[] arr)
    {
        int n = arr.Length;
        bool intercambio;

        // Bucle externo para las pasadas
        for (int i = 0; i < n - 1; i++)
        {
            intercambio = false;

            // Bucle interno para comparar y mover elementos
            // Los últimos 'i' elementos ya están en su lugar correcto
            for (int j = 0; j < n - i - 1; j++)
            {
                // Compara el elemento actual con el siguiente
                if (arr[j] > arr[j + 1])
                {
                    // Si es mayor se intercambian
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    
                    intercambio = true; // Se registra que hubo un cambio
                }
            }

            // si no hubo intercambio el arreglo ya está ordenado
            if (!intercambio)
            {
                break;
            }
        }
    }

        public static void Main(string[] args)
    {
        // Definimos un arreglo desordenado
        int[] numeros = { 64, 34, 25, 12, 22, 11, 90 };

        Console.WriteLine("Arreglo original: [" + string.Join(", ", numeros) + "]");

        // Llamamos al método para ordenarlo
        OrdenamientoBurbuja(numeros);

        Console.WriteLine("Arreglo ordenado: [" + string.Join(", ", numeros) + "]");
    }
}