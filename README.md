# 🧮 Ordenação em C: Algoritmos Clássicos com Explicações

> *This repository contains classic sorting algorithms implemented in C, with simple examples and detailed comments to help beginners understand how each algorithm works.*

Este repositório contém implementações em linguagem C de algoritmos clássicos de ordenação, com comentários detalhados e exemplos simples para facilitar o entendimento.

## 📂 Arquivos

- `ordenacao.c`: versão básica com apenas **Insertion Sort** e **Selection Sort**.
- `ordenacao-2.c`: versão completa com **Insertion**, **Selection**, **Bubble** e **Quick Sort**, todos comentados passo a passo em linguagem simples.

---

## ⚙️ Algoritmos implementados

### ✅ Insertion Sort (Ordenação por Inserção)
> *Goes through the array from left to right, inserting each element into its correct position by comparing it with the previous ones.*

Percorre o array da esquerda para a direita, inserindo cada elemento na sua posição correta comparando com os anteriores.

### ✅ Selection Sort (Ordenação por Seleção)
> *Repeatedly finds the smallest element in the unsorted part and swaps it with the current position.*

Percorre o array procurando o menor elemento restante e trocando com a posição atual.

### ✅ Bubble Sort (Ordenação por Flutuação)
> *Compares adjacent pairs and swaps them if they are in the wrong order; largest elements "bubble up" to the end.*

Compara pares adjacentes e troca se estiverem fora de ordem. Os maiores "borbulham" para o final.

### ✅ Quick Sort (Ordenação Rápida)
> *Selects a pivot, partitions the array so that smaller elements go to the left and larger ones to the right, and applies the algorithm recursively.*

Escolhe um pivô, particiona os elementos menores à esquerda e maiores à direita, e aplica recursivamente.

---

## 📋 Descrição

O programa gera um array com 20 números aleatórios (entre 1 e 30) e aplica os métodos de ordenação. Os algoritmos estão explicados com **comentários antes e dentro das funções**, incluindo exemplos em **linguagem natural** para facilitar o aprendizado.

---

## 🛠️ Como compilar e executar

1. Compile com o GCC:

```bash
gcc ordenacao-2.c -o ordenacao
```
