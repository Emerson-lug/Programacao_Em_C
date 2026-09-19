#include <stdio.h>

int CalcularFatorial(int num){
    int resutado = 1;
    
    for(int i = num; i > 0; i--){
        resutado = resutado * i;
    }

    return resutado;
}

int main(){
    int numFatorial = 6;
    int fatorial = CalcularFatorial(numFatorial);

    printf("\n\nO numero %d com seu fatorial eh: %d\n", numFatorial, fatorial);
    return 0;
}