# Prova Pratica: Calculadora_Modular_CLI

**Finalidade**
Desenvolver uma calculadora de terminal contínua que consolida toda a base do Módulo 1. O código será estruturado para demonstrar domínio em roteamento de menus, isolamento de lógica matemática em funções, conversão de tipos em tempo de execução e otimização direta de processador com operadores bit a bit.

**O Que o Código Deve Fazer**
Exibir um painel numérico de opções matemáticas. O usuário digitará dois números e a operação desejada. O sistema chamará uma função isolada para processar o cálculo e imprimirá o resultado. O programa só deve ser encerrado quando o usuário explicitamente escolher a opção de sair.

**Especificações e Regras de Implementação**

- **Controle de Fluxo (Menu Contínuo):**
    - Utilize um `do-while` para encapsular toda a execução. O loop deve perguntar a operação matemática e só encerrar se o usuário digitar `0` (Sair).
    - Implemente um `switch/case` que receba a escolha do usuário (1 para Soma, 2 para Subtração, 3 para Multiplicação, 4 para Divisão, 5 para Otimização Extrema).
    - Inclua um `default` para avisar o usuário caso ele digite uma opção inválida.
- **Funções e Escopo Local:**
    - A lógica matemática **não** pode ficar dentro do `switch` ou da `main`.
    - Crie funções independentes no topo do código: `float somar(float a, float b)`, `float subtrair(float a, float b)`, `float multiplicar(float a, float b)` e `float dividir(int a, int b)`.
    - A `main` servirá apenas como o roteador que lê a entrada do teclado e invoca essas funções.
- **Casting e Tipos (A Armadilha da Divisão):**
    - Note que a função `dividir` especificada acima exige receber dois parâmetros do tipo `int`, mas deve retornar um `float`.
    - Dentro da função `dividir`, você deve obrigatoriamente aplicar o *casting* `(float)` nas variáveis antes de realizar o cálculo para garantir que o resultado (como 5 / 2 = 2.5) não perca a casa decimal.
    - Adicione uma validação de segurança: se o divisor (`b`) for igual a 0, a função não deve calcular nada. Imprima um erro de "Divisão por zero" e retorne 0.
- **Otimização de Memória (Bitwise):**
    - Na opção 5 do menu (Otimização Extrema), o programa deve pedir apenas **um** número inteiro ao usuário.
    - Utilize o operador Bitwise de deslocamento (`<< 1`) para multiplicar esse número por 2 instantaneamente.
    - Em seguida, utilize o Bitwise AND (`& 1`) para dizer ao usuário se o resultado gerado é par ou ímpar. Imprima ambos os resultados na tela.

**[Codigo da Avaliação](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Avaliacoes/Pratico/Calculadora_Modular_CLI.c)**