#include <stdio.h>
// Fazendo testes com do-while.
// Sendo um loop que so termina se o usuario digitar 0, onde termina  loog com o while(dig != 0).


int main(){
    int dig;

    do{
        printf("\n------------------------------------");
        printf("\nEscolha oque deseja fazer nesse turno\n");
        printf("1.Atacar com Espada.\n2.Usar pocao.\n3.Usar Escudo.\n0.Correr\n\n");
        printf("Qual sera sua escolha: ");
        scanf("%d", &dig);

        switch (dig)
        {
        case 1:
            printf("\nVoce escolheu Atacar com Espada.\n\n");
            break;
        case 2:
            printf("\nVoce esta utilizando uma Pocao.\n\n");
            break;
        case 3:
            printf("\nVoce se defendeu usando o Escudo.\n\n");
            break;
        case 0:
            printf("\nVoce sai correndo da batalha.\n\n");
            break;
        default:
            printf("\nERRO: Essa opcao nao existe.\n\n");
            break;
        }

    //Termina o loop com a digitação do numero 0
    }while(dig != 0);

    return 0;
}