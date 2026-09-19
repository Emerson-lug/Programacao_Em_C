#include <stdio.h>
//Divisao entre dois numero, um maior (9) e outro menor (2) ambos iniciado como inteiro.
//Se fazer diretamente os dois valores como um divisao float o .5 some.
//Mas se fazer o numero maior ser float e o numero menor inteiro sobre esse .5 e aparece na conta

int main(){
    int a = 9;
    int b = 2;
    float divisao = a / b;
    float div = (float) a / b;

    printf("\nDivisao de numero\n");
    printf("-----------------\n\n");

    printf("Valores: %d e %d\n", a,b);
    printf("Divisao um (Float diretamente): %.2f \n", divisao);
    printf("Divisao dois (Float no primeiro valor): %.2f \n", div);
    return 0;
}