# **Prova Teórica: Módulo 1 (Sintaxe, Operadores e Escopo)**

1. Sobre o limite de atributos, o que acontece na memória se uma variável do tipo `unsigned char` (limite 255) receber o valor 255 e sofrer uma adição de `+1`?
    - [ ]  A) O programa trava com erro de *Overflow*.
    - [ ]  B) O valor é convertido automaticamente para `int` e passa a valer 256.
    - [ ]  C) O valor sofre um ciclo (wrap-around) silêncioso e volta para 0.
    - [x]  D) O valor permanece travado em 255.
2. Qual é o propósito prático de realizar um *casting* temporal, como `(float) a / b`, na divisão de duas variáveis inteiras?
    - [ ]  A) Reduzir o consumo de memória RAM da CPU durante a divisão.
    - [x]  B) Forçar o compilador a calcular as casas decimais antes que a divisão inteira as descarte.
    - [ ]  C) Alterar permanentemente o tipo da variável `a` para `float` no restante do código.
    - [ ]  D) Prevenir que o programa crashe caso tente dividir o número por zero.
3. Em otimização de sistemas, qual é a forma mais eficiente de verificar se um número inteiro é ímpar testando diretamente seus bits?
    - [ ]  A) `(numero ^ 1) == 1`
    - [ ]  B) `(numero % 2) != 0`
    - [ ]  C) `(numero | 1) == 1`
    - [x]  D) `(numero & 1) == 1`
4. Como atua a regra de "Curto-Circuito" no operador lógico AND (`&&`) quando a primeira condição é avaliada como falsa?
    - [ ]  A) O compilador acusa erro de sintaxe e encerra o programa imediatamente.
    - [ ]  B) A execução salta obrigatoriamente para a estrutura `else` mais próxima.
    - [x]  C) O compilador ignora completamente a leitura da segunda condição, pois o resultado final já é falso.
    - [ ]  D) A segunda condição ainda é processada para atualizar variáveis, mas o `if` não é ativado.
5. Ao utilizar o operador Bitwise de deslocamento para a esquerda (`<<`), qual é o efeito matemático de executar a instrução `numero << 3`?
    - [ ]  A) O número é dividido por 3.
    - [x]  B) O número é multiplicado por 8 (2³).
    - [ ]  C) O número é multiplicado por 3.
    - [ ]  D) O número é multiplicado por 6 (2 x 3).
6. Na arquitetura do compilador C, por que uma estrutura `switch/case` geralmente executa mais rápido do que uma longa cadeia de `if/else if` ao gerenciar menus ou estados?
    - [ ]  A) O `switch` converte todas as variáveis para texto, o que é lido mais rápido pela CPU.
    - [ ]  B) O `switch` não exige o uso da biblioteca `<stdio.h>`.
    - [x]  C) O compilador cria uma *jump table* (tabela de saltos) na memória, calculando e pulando direto para o endereço do caso correto.
    - [ ]  D) O `switch` ignora escopos e declara as variáveis de forma global.
7. Qual é a diferença mecânica direta entre os loops `while` e `do-while`?
    - [ ]  A) O `while` só aceita avaliações de variáveis primitivas, o `do-while` aceita chamadas de função.
    - [x]  B) O `while` verifica a condição antes de executar, enquanto o `do-while` garante que o bloco de código execute no mínimo uma vez antes de checar a condição.
    - [ ]  C) O `do-while` exige obrigatoriamente o uso do comando `break` para encerrar.
    - [ ]  D) O `while` roda infinitamente caso a condição mude no meio da execução, o `do-while` não.
8. Ao processar dados dentro de um loop `for`, qual é o efeito exato do comando `continue`?
    - [ ]  A) Interrompe o loop permanentemente e pula para a primeira linha de código fora dele.
    - [ ]  B) Pausa a execução do programa e aguarda um *input* do teclado.
    - [x]  C) Pula qualquer código restante da iteração atual e força o loop a saltar direto para a próxima repetição.
    - [ ]  D) Desativa as verificações lógicas do escopo atual, mas mantém a leitura sequencial das linhas.
9. Como a linguagem C padrão lida com a passagem de parâmetros de variáveis para dentro de uma função?
    - [ ]  A) Passagem por Referência: A função acessa e modifica diretamente a variável original na memória RAM.
    - [ ]  B) Passagem Global: A variável é movida temporariamente para o topo do código.
    - [ ]  C) Passagem por Destruição: A variável original é limpa da `main` para evitar duplicidade.
    - [x]  D) Passagem por Valor: A função recebe apenas uma fotocópia isolada do dado; alterações internas não afetam a variável original.
10. Em qual área da memória as variáveis de Escopo Local (criadas dentro de uma função) operam e qual é o seu ciclo de vida?
    - [ ]  A) Ficam no segmento de dados global e existem do início ao fim do software.
    - [ ]  B) Ficam no Disco Rígido (*Swap*) e são carregadas apenas em cálculos pesados.
    - [x]  C) Ficam na Pilha (*Stack*) de memória e são destruídas no momento em que a função atinge o seu fim.
    - [ ]  D) Ficam na Pilha (*Stack*) de memória e permanecem inativas até a função ser invocada novamente.