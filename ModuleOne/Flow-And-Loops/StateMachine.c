#include <stdio.h>
// Testando como fucniona o Switch case com quatro valores digitados e casa não tenha a opção cai no default.
// O Switch case na pratica ele faz um tipo de teste pulando para a opção correta, diferente do if/if else que faz linha por linha.

int main(){
    int dig;

    //Fazendo a pergunta para os casos do switch
    printf("\nDigite um numero para qual opcao deseja abaixo.\n");
    printf("1.Atacar\n2.Defender\n3.Curar\n4.Fugir\n\n");
    printf("Qual opcao vai escolher? ");
    scanf("%d",&dig);
    
    switch (dig)
    {
    case 1:
        printf("\nVoce escolheu Atacar.\n\n");
        break;
    case 2:
        printf("\nVoce se Defendeu.\n\n");
        break;
    case 3:
        printf("\nVoce esta se curando.\n\n");
        break;
    case 4:
        printf("\nVoce tenta fugir.\n\n");
        break;
    default:
        printf("\nERRO: Essa opcao nao existe!!\n\n");
        break;
    }

    return 0;
}