#include <stdio.h>

void CurarPersongem(int hp, int cura){
    int valor = cura += hp;
    printf("\nO Personagem recebeu cura! HP foi para %d\n",valor);
}

int main(){
    int hp_atual = 50;

    printf("\n\n-- HP FALSO COM FUNCAO --\n");
    CurarPersongem(hp_atual, 20);

    printf("\n\n-- HP VERDADEIRO --\n");    
    printf("\nO HP Original continua sendo: %d\n", hp_atual);

    return 0;
}