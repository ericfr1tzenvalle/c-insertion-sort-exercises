#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int *array, int tam) {
  for (int i = 0; i < tam; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void InsertionSort(int *array, int tamanho) {
  for (int i = 1; i < tamanho; i++) {
    int atual = array[i];
    int j = i - 1;
    while ((j >= 0) && atual < array[j]) {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = atual;
  }
}

void SelectionSort(int *array, int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    int indiceMenor = i;
    for (int j = i + 1; j < tamanho; j++) {
      if (array[j] < array[indiceMenor]) {
        indiceMenor = j;
      }
    }
    if (indiceMenor != i) {
      int temp = array[i];
      array[i] = array[indiceMenor];
      array[indiceMenor] = temp;
    }
  }
}

int main(void) {
  srand(time(NULL));
  int array[20];
  for (int i = 0; i < 20; i++) {
    array[i] = 1 + (rand() % 100); // Números aleatórios entre 1 e 100
  }

  printf("Array original:\n");
  printArray(array, 20);

  int arraySelecao[20];
  for (int i = 0; i < 20; i++)
    arraySelecao[i] = array[i];
  SelectionSort(arraySelecao, 20);
  printf("\nOrdenado por Selection Sort (crescente):\n");
  printArray(arraySelecao, 20);

  int arrayInsercao[20];
  for (int i = 0; i < 20; i++)
    arrayInsercao[i] = array[i];
  InsertionSort(arrayInsercao, 20);
  printf("\nOrdenado por Insertion Sort (crescente):\n");
  printArray(arrayInsercao, 20);

  return 0;
}
