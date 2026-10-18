#include <stdio.h>
//Experimento com gargalho entre float e double.
//FLOAT: O valor original aumentou nas quatro ultimas casas, aproximadamente quase mil numeros a mais nas ultimas casas.
//DOUBLE: O valor passado se manteve da mesma forma que foi declarado.


int main(){
    //Declarando valores.
    float num1 = 3.1415926535;
    double num2 = 3.1415926535;

    //Imprimindo os valores.
    printf("Valor no tipo float:    %.10f\n", num1);
    printf("Valor no tipo double:   %.10lf\n", num2);

    return 0;
}