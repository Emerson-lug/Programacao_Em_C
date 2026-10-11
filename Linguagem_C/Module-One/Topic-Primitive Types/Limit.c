#include <stdio.h>
//Fazendo teste de limite de atributo usando o usigned.
//Mesmo sendo um char, atribindo um valor nele retorna 0, pois passa do valor.


int main (){
    unsigned char status_poder = 255;

    status_poder += 1;

    printf("Status Poder : %d\n", status_poder);
    printf("Status Poder : %c\n", status_poder);
    return 0;
}