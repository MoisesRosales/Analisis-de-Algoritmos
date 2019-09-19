#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// Función para dividir el array y hacer los intercambios
int divide(int *array, int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;
 
    pivot = array[start];
    left = start;
    right = end;
 
    // Mientras no se cruzen los índices
    while (left < right) {
        while (array[right] > pivot) {
            right--;
        }
 
        while ((left < right) && (array[left] <= pivot)) {
            left++;
        }
 
        // Si todavía no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
 
    // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;
 
    // La nueva posición del pivot
    return right;
}
 
// Función recursiva para hacer el ordenamiento
void quicksort(int *array, int start, int end)
{
    int pivot;
 
    if (start < end) {
        pivot = divide(array, start, end);
 
        // Ordeno la lista de los menores
        quicksort(array, start, pivot - 1);
 
        // Ordeno la lista de los mayores
        quicksort(array, pivot + 1, end);
    }
} 
// Funcion para volver los numeros impares en pares
    void convertir_en_par(int *array,int i){
    if(i<= sizeof(array)+1){
        if((array[i]%2)!=0){
            int temp = 0;
            temp = array[i];
            array[i] = temp-1;
        }
            convertir_en_par(array, i+1);
    }
}
int main()
{
    int const MAX = 100;
    int arraySize;
 
    clock_t start_time;
    clock_t final_time;
    double total_time;
    start_time = clock();
 
    cout << "Ingresa tamanyo: " << endl;
    cin >> arraySize;
    
    int tamanio = arraySize;
    
    int a[arraySize];
 
    // Para que el rand no genere siempre los mismos números, utilizando la hora del sistema
    srand(time(0));
 
    // Para generar enteros aleatorios usamos rand()
    for (int i = 0; i < arraySize; i++) {
        a[i] = rand() % MAX;
    }
 
    cout << "Array antes de ordenarse: " << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << a[i] << " ";
    }
 
    cout << endl << endl;
 
    quicksort(a, 0, arraySize - 1);
 
    final_time = clock();
    total_time = ((double)(final_time - start_time)) / CLOCKS_PER_SEC;
 
    printf("Tiempo de ejecución : %lf segundos \n", total_time);
 
    cout << "Array ordenado " << endl;
    for (int i = 0; i < arraySize; i++ ){
        cout << a[i] << "-";
    }
 
    cout << endl << endl;
 
    convertir_en_par(a,0);
    
    cout << "Array ordenado en pares " << endl;
    for (int i = 0; i < arraySize; i++ ){
        cout << a[i] << "-";
    }
    cout<<endl;
    
    cout << "El missing number es: " << a[tamanio-1]+2 << endl;
    return 0;
}
