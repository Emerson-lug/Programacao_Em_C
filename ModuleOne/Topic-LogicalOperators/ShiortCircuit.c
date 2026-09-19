#include <stdio.h>

int main(){
    int num = 7;

    if(num == 1 && num / 0 == 0){
        printf("Numero da condição: %d", num);
    }
    printf("\nSistema Sobreviveu.\n\n");
}