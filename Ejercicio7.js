/**
 * Implementa el algoritmo de ordenamiento de burbuja.
 * @param {number[]} arr
 */
function ordenamientoBurbuja(arr) {
  let n = arr.length;
  let intercambio;

  // Bucle para recorrer todo el arreglo
  for (let i = 0; i < n - 1; i++) {
    intercambio = false;

    // Bucle para comparar y mover el elemento más grande
    // Los últimos i elementos ya están en su lugar
    for (let j = 0; j < n - i - 1; j++) {
      // Compara el elemento actual con el siguiente
      if (arr[j] > arr[j + 1]) {
        // Si es mayor, se intercambian
        
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
        intercambio = true;
      }
    }

    // si no hubo intercambios en esta pasada
    // el arreglo ya está ordenado.
    if (!intercambio) {
      break;
    }
  }
 
  return arr;
}



// Definimos un arreglo desordenado
let numeros = [64, 34, 25, 12, 22, 11, 90];

console.log(`Arreglo original: [${numeros.join(", ")}]`);

// Llamamos a la función para ordenarlo
ordenamientoBurbuja(numeros);

console.log(`Arreglo ordenado: [${numeros.join(", ")}]`);