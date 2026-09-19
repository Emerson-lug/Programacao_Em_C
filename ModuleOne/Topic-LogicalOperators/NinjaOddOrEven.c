#include <stdio.h>
// Utilizando o Bitwise AND (&1) em vez de o clasivo (%2) para ver se um numero é impar ou par.
// Com isso o desenpenho em ver os numeros é muito maior dessa forma.
// Impar sempre termina com 1 e par sempre termina com 0.

int main(){
    int num1 = 5;
    int num2 = 6;

    //TESTANDO O PRIMEIRO NUMERO
    if((num1 &1) == 0){
        printf("\nO numero %d eh par.\n", num1);
    }
    else {
        printf("O numero %d eh impar.",num1);
    }

    //TESTANDO O SEGUNDO NUMERO
    if((num2 &1) == 0){
        printf("\nO numero %d eh par.\n", num2);
    }
    else {
        printf("O numero %d eh impar.",num2);
    }

    return 0;
}