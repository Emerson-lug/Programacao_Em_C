#include <stdio.h>
// Fazendo um teste de otimização com a operação de divisão, parecida com o de multiplicação apenas mudando os operadores.
// Usando o (>>) faz um calculo mais rapido, empurando os bits da esquerda para a direita. 


int main(){
    int num = 100;

    int div = num >> 2;

    printf("\nO resultado da divisao foi: %d\n\n", div);

    return 0;
}