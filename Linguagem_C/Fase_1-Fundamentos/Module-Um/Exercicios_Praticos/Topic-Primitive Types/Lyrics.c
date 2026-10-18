#include <stdio.h>
//Fazendo um calulo com a propria letra 'minuscula'.
// Se for imprimir em forma de texto sai a letra maiuscula.
// Se imprimida em forma de numero inteiro sai um numero relacionado a aquela letra.


int main(){
    //Declarando variavel
    char letra = 'a';

    //Fazendo calculo com a variavel
    letra -= 32;

    //Imprimindo o resultado
    printf("\nResultado do Calculo\n\n");

    printf("Resultado da letra em texto:            %c\n", letra);
    printf("Resultado da letra em numero inteiro:   %d\n", letra); 

    return 0;
}