#include <stdio.h>
//Fazendo teste de memória em de algumas variave.

int main(){
    printf("\nQuantidade em Byte(s) dos tipos de variaveis\n");
    printf("---------------------------------------------\n\n");

    printf("Char:                  %zu byte(s)\n", sizeof(char));              //Retorna 1 byte
    printf("int:                   %zu byte(s)\n", sizeof(int));               //Retorna 4 bytes
    printf("float:                 %zu byte(s)\n", sizeof(float));             //Retorna 4 bytes
    printf("doble:                 %zu byte(s)\n", sizeof(double));            //Retorna 8 bytes
    printf("usinged int:           %zu byte(s)\n", sizeof(unsigned int));      //Retorna 4 bytes
    printf("usinged char:          %zu byte(s)\n", sizeof(unsigned char));     //Retorna 1 byte
    printf("usinged long int:      %zu byte(s)\n", sizeof(unsigned long int)); //Retorna 4 Bytes

    return 0;
}