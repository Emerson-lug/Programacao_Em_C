#include <stdio.h>

int turnos_jogados = 1;

void AvancarTurno(){
    turnos_jogados++;
}

int main(){
    printf("\n\n--- ANTES DE CHAMAR FUNCAO --");
    printf("\nTurnos jogados Atualmente: %d\n\n", turnos_jogados);
    
    printf("\n--- CHAMANDO FUNCAO TRES VEZES --\n");
    AvancarTurno();
    printf("\nTurnos jogados: %d\n", turnos_jogados);
    AvancarTurno();
    printf("\nTurnos jogados: %d\n", turnos_jogados);
    AvancarTurno();
    printf("\nTurnos jogados: %d\n", turnos_jogados);

    return 0;
}