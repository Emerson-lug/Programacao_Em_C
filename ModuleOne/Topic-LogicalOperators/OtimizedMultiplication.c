#include <stdio.h>
// Fazendo um teste de otimização com a operação de multiplicação.
// Usando o (<<) faz um calculo mais rapido, empurando os bits da direita para a esquerda. 


int main(){
    int num = 5;

    int mul = num << 3;

    printf("\nO resultado da multiplicacao foi: %d\n\n", mul);

    return 0;
}