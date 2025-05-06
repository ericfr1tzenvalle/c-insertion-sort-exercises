# Ordenação em C: Insertion Sort e Selection Sort

Este projeto em C implementa dois algoritmos clássicos de ordenação:

- **Insertion Sort** (Ordenação por Inserção)
- **Selection Sort** (Ordenação por Seleção)

## 📋 Descrição

O programa cria um array de 20 números inteiros aleatórios (entre 1 e 100) e aplica os dois métodos de ordenação em **ordem crescente**. O array original é mantido para comparação entre os resultados dos dois algoritmos.

### Algoritmos implementados

- `InsertionSort`: percorre o array da esquerda para a direita, inserindo cada elemento na posição correta.
- `SelectionSort`: seleciona o menor elemento do restante do array e o coloca na posição correta.

## 🛠️ Como compilar e executar

1. Compile o código:
   ```bash
   gcc ordenacao.c -o ordenacao
