#include <stdio.h>

//Variaveis global para a digitação dos numeros nas perguntas.
float num1, num2;

//Funções de calculos, fora do main para manter limpo.
float Somar(float a, float b){
    float resultado = a + b;
    printf("%.2f + %.2f = %.2f\n", a, b, resultado);
    return resultado;
};

float Subtrair(float a, float b){
    float resultado = a - b;
    printf("%.2f - %.2f = %.2f\n", a, b, resultado);
    return resultado;
};

float Multiplicar(float a, float b){
    float resultado = a * b;
    printf("%.2f * %.2f = %.2f\n", a, b, resultado);
    return resultado;
};

float Dividir(int a, int b){
    //Se o dividor 'b' for zero ele entra na condição de do if, póis não existe divisão por zero.
    if(b == 0){
        printf("\nERRO: Nao tem divisao por zero\n");
        return 0;
    }

    //Se o segundo divisor 'b' não for zero faz o calculo normalmente.
    float resultado = (float) a / b;
    printf("%d / %d = %.2f\n", a, b, resultado);
    return resultado;
};

// Operação Bitwise AND (&1) se for 0 é par, se for 1 é impar;
int Bitwise (int a){
    //Variaveis e constante de calculos
    int multiplicacao =  a << 1;
    int resultado = multiplicacao & 1;

    printf("%d * 2 = %d", a, multiplicacao);
    
    // Verificação se é par ou impar com if
    if(resultado == 0){
        printf("\nNumero %d eh par.\n", multiplicacao);
    }
    else {
        printf("\nNumero %d eh impar.\n", multiplicacao);
    }

    return a;
}

void NumCalculo(){
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
}

//A Main servindo apenas para perguntas para fazer os calculos.
int main(){
    //Constante para escolher qual calculo ira fazer.
    int escolha;

    //Loop para todas as escolhas, se o usuario digitar 0 sai da calculadora.
    do{
        //Opções de operações da calculadora.
        printf("\n\n--- CALCULADORA MODULAR ---\n\n");
        printf("Escolha a operacao desejada\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Otimizacai Extrema\n");
        printf("0. Sair da Calculadora\n\n");

        //Usando a constante 'escolha' com o numero digitado do menu de operações.
        printf("Qual operacao: ");
        scanf("%d", &escolha);

        // Switch/case para cada operação, chamando a função correspondente fora do main.
        switch (escolha)
        {
        case 1:
            NumCalculo();
            Somar(num1,num2);
            printf("\n---------------------------");
            break;
        case 2:
            NumCalculo();
            Subtrair(num1,num2);
            printf("\n---------------------------");
            break;
        case 3:
            NumCalculo();
            Multiplicar(num1,num2);
            printf("\n---------------------------");
            break;
        case 4:
            NumCalculo();
            Dividir(num1,num2);
            printf("\n---------------------------");
            break;
        case 5:
            int num_bit;
            printf("Digite um numero: ");
            scanf("%d", &num_bit);

            Bitwise(num_bit);
            printf("\n---------------------------");
            break;

        // Mensagem de saida da calculadora.
        case 0:
            printf("\nObrigado por utilizar a calculadora!\n");
            break;

        //Caso seja uma opção fora de 1 a 5 entra no default.
        default:
            printf("ERRO: Essa opcao nao existe! Escolha de 1 a 4 (Operacoes)");
            break;
        }

    // Caso seja digitado 0 sai do loop.
    }while(escolha != 0);
}