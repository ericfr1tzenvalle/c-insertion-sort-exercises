#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ---------------------- INSERTION SORT ----------------------

// O método começa no índice 1 e compara com i - 1 (índice 0), ou seja, compara
// a direita com a esquerda. Se o da direita for menor, fazemos array[j + 1] =
// array[j], que move o da esquerda para a direita. Depois, diminuímos j--, o
// while termina e colocamos o valor atual no lugar certo (array[j + 1] =
// atual).

// Minhas palavras.
// Imagine o array 5,3,1,2
// atual = array[i] que é posicao 1 ou seja o 3. e meu j armazena a posicao i -
// 1 que é 0. se o j for maior q zero ou igual verificamos se o && satisfaz, se
// o atual *3* for menor que o array[j] = 5, se satisfaz falamos que o array em
// j + 1 que nesse caso é a posicao onde está o 3. é sobrescrita com o 5. o
// array fica 5,5,1,2; decrementamos o j--; e verificamos mais uma vez o while
// porem agr com o j valendo -1 ele sai do while. e vai para o array[j + 1] que
// atualmente é array[0] e dizem que ele é o 3 que armazenamos no inicio.

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

// ---------------------- SELECTION SORT ----------------------

// O método percorre o array da esquerda para a direita, começando no índice 0.
// Para cada posição i, assumimos que o menor valor está ali (min = i).
// Depois, comparamos com o restante do array (índices j > i) para achar o menor
// valor real. Se encontrarmos um valor menor (num[j] < num[min]), atualizamos
// min = j. Ao final da busca, se min for diferente de i, fazemos a troca.

// Minhas palavras
// Imagine que temos o array 10 , 9, 8 , 12
// atribuimos para o min o i que no caso é o 10; que é o elemento em que estamos
// agora. Dizemos como se ele fosse o menor. j vira i + 1 ou seja ele é o
// proximo elemento e o nosso min é o anterior. comparamos se j é menor que min,
// se for nosso novo min é j. entao temos o min como 9 por enquanto. agora
// verificamos dnv num[j] sendo agora j o 8, entao  8 < 9? min vira 8. mesma
// coisa se repete pra 12 < 8? nao. ele sai do for agr. e vamos pro if no if ele
// pergunta se o i é diferente do min ou seja se o 10 é diferente de 8. é sim
// entao oq fazemos é guardar o 10 e trocar ele de lugar com o 8 agr temos o
// array 8,9,10,12 que por acaso ficou ordenado.

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

// ---------------------- BUBBLE SORT ----------------------

// O método percorre o array várias vezes, comparando pares de elementos
// adjacentes. Se o da esquerda for maior que o da direita, trocamos os dois de
// lugar. A cada passada, o maior valor "borbulha" até sua posição correta no
// final do array.

// Minhas palavras
// imagine o array 10,5,3,2
// Nesse metodo em questao temos como primeiro parametro o i sendo tam - 1
// pra garantir que os elementos que estao no fim sao os maiores.
// esse outro for começa com j em 0 e enquanto ele for menor q i continuamos.
// a primeira comparacao se da por array[0] > array[0 + 1]?   10 > 5? sim entao
// pegamos salvamos o 10, e dizemos q no lugar dele vem o 5  e no lugar do 5 vai
// o 10 (swap) ARRAY FICOU 5,10,3,2 e seguimos agora virou array[1] > array[1 +
// 1]? ou seja 10 > 3? sim entao trocamos de lugar. e por assim vai até chegar
// no final. quando chega no final i--; ou seja o 10 já está ordenado.

void bubbleSort77(int *array, int tam) {
  int aux;
  for (int i = tam - 1; i >= 1; i--) {
    for (int j = 0; j < i; j++) {
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }
}

// ---------------------- QUICK SORT ----------------------

void quickSort77(int *array, int inicio, int fim) {
  int i = inicio, j = fim;
  int pivo = array[(inicio + fim) / 2];
  int aux;

  while (i <= j) {
    while (array[i] < pivo)
      i++;
    while (array[j] > pivo)
      j--;
    if (i <= j) {
      aux = array[i];
      array[i] = array[j];
      array[j] = aux;
      i++;
      j--;
    }
  }

  if (inicio < j)
    quickSort77(array, inicio, j);
  if (i < fim)
    quickSort77(array, i, fim);
}

// ---------------------- PRINT ----------------------

void printArray(int *array, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

// ---------------------- MAIN SIMPLIFICADA ----------------------

int main(void) {
  int original[20];
  int copia[20];

  srand(time(NULL));

  for (int i = 0; i < 20; i++) {
    original[i] = 1 + rand() % 30;
  }

  // Teste com Bubble Sort
  printf("Original:\n");
  printArray(original, 20);
  for (int i = 0; i < 20; i++)
    copia[i] = original[i];
  bubbleSort77(copia, 20);
  printf("Bubble Sort:\n");
  printArray(copia, 20);
  printf("------------------------\n");

  // Teste com Insertion Sort
  for (int i = 0; i < 20; i++)
    copia[i] = original[i];
  insertionSort77(copia, 20);
  printf("Insertion Sort:\n");
  printArray(copia, 20);
  printf("------------------------\n");

  // Teste com Selection Sort
  for (int i = 0; i < 20; i++)
    copia[i] = original[i];
  selectionSort77(copia, 20);
  printf("Selection Sort:\n");
  printArray(copia, 20);
  printf("------------------------\n");

  // Teste com Quick Sort
  for (int i = 0; i < 20; i++)
    copia[i] = original[i];
  quickSort77(copia, 0, 19);
  printf("Quick Sort:\n");
  printArray(copia, 20);

  return 0;
}
