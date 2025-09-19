def ordenamiento_burbuja(arr):
  
    n = len(arr)
    # Recorre toda la lista
    for i in range(n):
        intercambio = False
        # El último i elementos ya están en su lugar, por eso n-i-1
        for j in range(0, n - i - 1):
            # Compara el elemento actual con el siguiente
            if arr[j] > arr[j + 1]:
                # Si es mayor, se intercambian
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                intercambio = True

        # Optimización: si no hubo intercambios en esta pasada,
        # la lista ya está ordenada.
        if not intercambio:
            break

# --- Programa Principal ---
if __name__ == "__main__":
    # Definimos una lista desordenada
    numeros = [64, 34, 25, 12, 22, 11, 90]

    print(f"Lista original: {numeros}")

    # Llamamos a la función para ordenarla
    ordenamiento_burbuja(numeros)

    print(f"Lista ordenada: {numeros}")