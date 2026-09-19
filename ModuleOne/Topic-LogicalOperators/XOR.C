#include <stdio.h>
// Fazendo testes com o XOR com dois valores.
// Uma troca simples entre os dois valores, o valor a = 10 vira 20 e o valor b = 10 vira 10.
// Observação: Se utilizar apenas duas vezes os valos (A) e (B) o valor (B) vira 10, mas o valor (A) vira 30.
// Isso ocorre por que o numero 10 ainda esta na letra (A) fazendo uma soma entre os dois valores 20 + 10 = 30.
// Quando utilizado três vezes ocorre a troca certa.


int main(){
    int a = 10;
    int b = 20;

    printf("\nValor de A antes o XOR: %d\n",a);
    printf("Valor de B antes o XOR: %d\n",b);

    printf("\n-----------------------------------\n\n");
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    
    printf("Valor de A apos o XOR: %d\n",a);
    printf("Valor de B apos o XOR: %d\n\n",b);

    return 0;
}