#include <stdio.h>

int ExibirMenu(){
    int dig;
    printf("\n------------------------------------");
    printf("\nEscolha oque deseja fazer nesse turno\n");
    printf("1.Atacar com Espada.\n2.Usar pocao.\n3.Usar Escudo.\n0.Correr\n\n");
    printf("Qual sera sua escolha: ");
    scanf("%d", &dig);

    return dig;
}

int main(){
    int opcao;
    do{
        opcao = ExibirMenu();
        switch (opcao)
        {
        case 1:
            printf("\nVoce escolheu Atacar com Espada.\n");
            break;
        case 2:
            printf("\nVoce esta utilizando uma Pocao.\n");
            break;
        case 3:
            printf("\nVoce se defendeu usando o Escudo.\n");
            break;
        case 0:
            printf("\nVoce sai correndo da batalha.\n");
            break;
        default:
            printf("\nERRO: Essa opcao nao existe.\n");
            break;
        }

    }while(opcao != 0);

    return 0;
}