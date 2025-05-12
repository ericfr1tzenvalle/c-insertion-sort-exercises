#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//                 INSERTION SORT

// O método começa no índice 1 e compara com i - 1 (índice 0), ou seja, compara
// a direita com a esquerda. Se o da direita for menor, fazemos array[j + 1] =
// array[j], que move o da esquerda para a direita. Depois, diminuímos j--, o
// while termina e colocamos o valor atual no lugar certo (array[j + 1] = atual).
void insertionSort77(int *array, int tam) {
  int i, j, atual;
  for (i = 1; i < tam; i++) {
    atual = array[i];
    j = i - 1;
    while ((j >= 0) && (atual < array[j])) {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = atual;
  }
}

//                 SELECTION SORT

// O método percorre o array da esquerda para a direita, começando no índice 0.
// Para cada posição i, assumimos que o menor valor está ali (min = i).
// Depois, comparamos com o restante do array (índices j > i) para achar o menor
// valor real. Se encontrarmos um valor menor (num[j] < num[min]), atualizamos min = j.
// Ao final da busca, se min for diferente de i, fazemos a troca:
// guardamos num[i] no aux, colocamos o menor valor (num[min]) em num[i],
// e colocamos o valor antigo de num[i] em num[min].
// Esse processo garante que a menor parte do array vai sendo colocada nas posições iniciais passo a passo.
void selectionSort77(int *num, int tam) {
  int i, j, min, aux;
  for (i = 0; i < tam - 1; i++) {
    min = i;
    for (j = i + 1; j < tam; j++) {
      if (num[j] < num[min]) {
        min = j;
      }
    }
    if (i != min) {
      aux = num[i];
      num[i] = num[min];
      num[min] = aux;
    }
  }
}

void printArray(int *array, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d\n", array[i]);
  }
}

int main(void) {
  int array[10];
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    array[i] = 1 + rand() % 30;
  }

  printArray(array, 10);

  selectionSort77(array, 10);

  printf("--------------------------------\n");

  printArray(array, 10);

  return 0;
}
