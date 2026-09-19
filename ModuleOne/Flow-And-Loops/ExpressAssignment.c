#include <stdio.h>
// Com apenas uma variavel sem utilizar if/ else if, foi possivel testar duas possibilidades no escudo.
// Com o operador ternário é posivel fazer testes rapidos entre as variveis fazendo atribuições.

int main(){
    int escudo_quebrado = 0;
    int ataque = 100;
    
    int dano_recebido = (escudo_quebrado == 1) ? ataque : ataque / 2;

    printf("\n-- ESTADOS ESCUDO --\n\n");

    printf("O dano pelo escudo foi de: %d", dano_recebido);

    return 0;
}