#include <stdio.h>
// Utilizando o for junto com o (&1) para separar numeros impares.
// Na impreção dos numeros dentro do for de 1 a 20 faz uma separação dos numeros.

int main(){
    //Imrprimindo apenas os numeros impares
    printf("\n-- IMRPRECAO DE NUMEROS IMPARES --\n");
    for(int i = 1; i < 21; i++){
        if((i & 1) == 0){
            continue;
        }
        printf("\n%d", i);
    }

    return 0;
}