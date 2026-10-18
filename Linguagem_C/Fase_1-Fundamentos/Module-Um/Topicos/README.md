# **Módulo um: Sintaxe e Lógica**
Nesse modulo tem 4 tópicos, abordando sobre a sintaxe e lógica básica dentro de C.

## **Tópico Um: Tipos primitivos, Modificadores e Casting**
Em C, o controle de performance e memória começa no momento em que faz a escolha do tipo da variável.

### Tipos Primitivos

- `Char` (1 byte): Armazena um único caractere (como 'A') ou números inteiros minúsculos (-128 a 127). Na prática, é apenas um valor numérico lido através da tabela ASCII. Ex: `Char Letra = ‘A’` - `scanf(”%c”, &letra);`
- `int` (geralmente 4 bytes): O padrão para números inteiros. Vai de -2.14 bilhões a 2.14 bilhões. EX: Int num  = 10 - `scanf(”%d”,&num);`
- `float` (4 bytes): Números com casas decimais (ponto flutuante). Precisão confiável de cerca de 6 a 7 casas. Ex: `float num = 1.5` -`scanf(”%f”,&num);`
- `double` (8 bytes): Ponto flutuante de dupla precisão. Essencial quando cálculos físicos complexos exigem até 15 casas decimais corretas. Ex: `doble num 10.100` - `scanf(”%lf”,&num);`


### Mortificadores de Tipo

- `unsigned`: Remove a capacidade de armazenar números negativos, dobrando o limite para o lado positivo. Um `unsigned char` vai de 0 a 255. Ideal para atributos que nunca podem ficar abaixo de zero, como pontos de experiência ou moedas em um inventário.
- `short` e `long`: Alteram a largura em memória do tipo base. Um `short int` pode cair para 2 bytes, poupando espaço valioso se você souber que aquele dado específico não passará de 32.767.


### Casting (Conversão de Tipos)

É a técnica de forçar o compilador a ler uma variável momentaneamente como outro tipo. Por padrão, se você dividir o inteiro `5` pelo inteiro `2`, o C executa uma divisão inteira, corta o decimal e retorna `2`. Para obter `2.5`, você aplica um casting temporário em um dos valores: `(float) 5 / 2.`

### Exercícios Práticos

1. **O Mapa da Memória**
Escreva um programa usando a função `sizeof()` para imprimir no terminal a quantidade exata de bytes ocupada por um `char`, um `int`, um `float`, um `double` e um `unsigned long int` no seu compilador atual.

[Código do Exercício 1](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-Primitive%20Types/Memory.c)

2. **O Limite do Atributo (Overflow)**
Declare um `unsigned char` (que só suporta até 255) chamado `status_poder` e atribua o valor 255. Some 1 a essa variável e imprima o resultado. Entenda na prática o que acontece quando a memória "dá a volta".

[Código do Exercício 2](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-Primitive%20Types/Limit.c)

3. **A Armadilha da Divisão**
Declare dois inteiros, `a = 9` e `b = 2`. Crie duas variáveis `float`: a primeira recebe `a / b` diretamente, e a segunda recebe `(float) a / b`. Imprima ambas e observe a diferença silenciosa.

[Código do Exercício 3](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-Primitive%20Types/TrapDiv.c)

4. **A Matemática das Letras (ASCII)**
Declare um `char letra = 'a'` (minúsculo). Subtraia 32 dessa variável e imprima o novo resultado duas vezes: uma usando o formatador de texto (`%c`) e outra com o formatador de número inteiro (`%d`).

[Código do Exercício 4](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-Primitive%20Types/Lyrics.c)

5. **Gargalo de Precisão**
Declare um `float` e um `double`, atribuindo a ambos o valor `3.1415926535`. Imprima os dois na tela forçando a exibição de 10 casas decimais (usando `%.10f` e `%.10lf`). Avalie qual dos dois corrompeu o dado original por falta de espaço em memória.

[Código do Exercício 5](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-Primitive%20Types/Guffaw.c)


## **Tópico Dois:Operadores Lógicos e Bit a Bit (Biwise)**
C permite que converse quase diretamente com o processador através dos bits.

### Operadores Lógicos (O Controle de Fluxo)

Trabalham com blocos inteiros de condições e utilizam a regra do **curto-circuito** (short-circuit) para poupar processamento.

- **`&&` (AND / E):** Retorna `1` apenas se todas as condições forem verdadeiras.
    - *Como funciona o curto-circuito:* Se a primeira condição for falsa, o C cancela a leitura do resto da linha.
    - *Caso de uso:* `if (jogador_vivo && hp > 0)`. Se `jogador_vivo` for falso, o C não gasta tempo verificando o `hp`.
- **`||` (OR / OU):** Retorna `1` se pelo menos uma condição for verdadeira.
    - *Como funciona o curto-circuito:* Se a primeira condição for verdadeira, o C ignora o resto da linha, pois já sabe que o resultado final será verdadeiro.
    - *Caso de uso:* `if (tecla_pressionada == 'ESC' || botao_fechar_clicado)`.
- **`!` (NOT / NÃO):** Inverte o estado lógico. O que é verdadeiro vira falso e vice-versa.
    - *Caso de uso:* `if (!arquivo_aberto)` para checar rapidamente se um ponteiro de arquivo retornou nulo.

### Operadores Bit a Bit (A Otimização de Memória)

Eles ignoram o valor da variável e olham para sua representação binária. Em jogos de RPG baseados em texto, por exemplo, em vez de criar múltiplos `int` ou `bool` para cada status de um personagem (gastando vários bytes), você usa um único `char` (1 byte = 8 bits) para armazenar até 8 status simultâneos usando máscaras de bits (bitmasks).

Imagine um `char status = 0;` (em binário: `00000000`).

- Bit 0: Envenenado (1)
- Bit 1: Atordoado (2)
- Bit 2: Silenciado (4)
- **`|` (Bitwise OR):** Compara duas sequências de bits. Se houver um `1` em qualquer um dos lados, o resultado é `1`.
    - *Caso de uso (Adicionar Status):* Para deixar o personagem Envenenado e Silenciado, você faz `status = status | 5;` (5 em binário é `00000101`). O personagem agora tem os dois efeitos ativos ocupando apenas 1 byte.
- **`&` (Bitwise AND):** Retorna `1` apenas se os dois bits comparados forem `1`.
    - *Caso de uso (Verificar Status):* Para saber se o personagem está Silenciado (que equivale a 4, ou `00000100`), você testa `if ((status & 4) != 0)`. Se retornar diferente de zero, a flag está ativa.
- **`^` (Bitwise XOR - Ou Exclusivo):** Retorna `1` apenas se os bits forem diferentes. Se forem iguais (1 e 1, ou 0 e 0), retorna `0`.
    - *Caso de uso (Alternar/Toggle):* Criar um interruptor. Se você aplicar um XOR na flag de uma porta, ela abre se estiver fechada, e fecha se estiver aberta, sem precisar de um `if/else`. Também é a base de algoritmos simples de criptografia.
- **`~` (Bitwise NOT):** Inverte todos os bits de uma vez (0 vira 1, 1 vira 0).
    - *Caso de uso (Remover Status):* Usado em conjunto com o `&` para limpar uma flag específica sem alterar as outras. `status = status & ~4;` cura o silenciamento, mantendo o veneno intacto.
- **`<<` (Shift Left) e `>>` (Shift Right):** Deslocam os bits para a esquerda ou direita.
    - *Caso de uso (Matemática de Alta Performance):* Fazer `numero << 1` empurra os bits para a esquerda, o que multiplica o número por 2 na velocidade da luz diretamente no processador. Fazer `numero >> 1` divide o número por 2.

### Exercícios Práticos

1. **Par ou Ímpar Ninja**
Crie um programa que leia um número inteiro e diga se ele é par ou ímpar usando o operador Bitwise AND (`& 1`) em vez do clássico módulo (`% 2`). O último bit de todo número ímpar é sempre 1.

[Código do Exercício 1](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-LogicalOperators/NinjaOddOrEven.c)

2. **Multiplicação Otimizada**
Crie uma variável inteira valendo 5. Multiplique-a por 8 usando apenas o operador de deslocamento de bits para a esquerda (`<<`). Imprima o resultado.

[Código do Exercício 2](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-LogicalOperators/OtimizedMultiplication.c)

3. **Divisão Rápida**
Crie uma variável com o valor 100. Divida-a por 4 usando o operador de deslocamento de bits para a direita (`>>`). Imprima o resultado.

[Código do Exercício 3](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-LogicalOperators/QuickDivision.c)

4. **O Truque do XOR (Swap sem variável temporária)**
Declare `a = 10` e `b = 20`. Inverta os valores das duas variáveis (fazer `a` valer 20 e `b` valer 10) sem criar uma terceira variável `temp`. Dica: você usará `a = a ^ b;` três vezes seguidas.

[Código do Exercício 4](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-LogicalOperators/XOR.C)

5. **Comprovando o Curto-Circuito**
Crie um `if` com duas condições unidas por `&&`. A primeira condição deve ser falsa (ex: `0 == 1`). A segunda condição deve ser uma tentativa de dividir um número por zero (ex: `10 / 0 == 0`). Como a primeira é falsa, o C nunca executará a divisão por zero, evitando que o programa crashe. Imprima uma mensagem provando que o programa sobreviveu.

[Código do Exercício 5](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Topic-LogicalOperators/ShiortCircuit.c)


## **Tópico Três: Controle de Fluxo e Loops**
A espinha dorsal da execução dos programas.

### Estruturas Condicionais (Decisão)

- if / else if / else
    - Avalia expressões lógicas puras. É a ferramenta padrão quando você precisa testar intervalos numéricos ou múltiplas variáveis simultaneamente (ex: verificar se o HP de um inimigo está abaixo de 20 para mudar o comportamento da IA dele).

- switch / case
    - Avalia valores exatos e constantes, geralmente testando uma única variável inteira ou `char`. Em vez de ler cada `case` sequencialmente de cima para baixo, o compilador em C otimiza o `switch` criando uma *jump table* (tabela de saltos) na memória. A CPU calcula o endereço exato do bloco na memória e pula direto para ele. Isso o torna infinitamente mais rápido que uma escadaria de dezenas de `if/else` ao gerenciar menus complexos ou transições de estados.

- Operador Ternário (`condição ? verdadeiro : falso` )
    - Um `if/else` encapsulado em uma única linha. É excelente para atribuições dinâmicas sem gastar linhas de código. Exemplo: `int dano_final = (defesa_ativa) ? ataque / 2 : ataque;`.


### Estruturas de Repetição (Loops)

-  For
    - Usado quando você sabe exatamente o limite e a quantidade de iterações. Ele agrupa a inicialização da variável, a condição de parada e o incremento de uma só vez. Ideal para varrer matrizes e vetores de ponta a ponta.

-  While
    - Testa a condição antes de executar o bloco. É a escolha natural quando você não sabe quantas vezes o código precisa rodar. O loop principal de um jogo (que roda atualizando quadros até que a flag `rodando == 0`) é estruturado com um `while`.

- Do-While
    - Executa o bloco inteiro de código no mínimo uma vez, deixando para checar a condição apenas no final. Perfeito para capturar entradas de usuário no terminal, pois você exibe o menu na tela antes de validar se o usuário digitou a opção correta.

### Modificadores de Fluxo

- Break
    - Interrompe a estrutura imediatamente, pulando para a primeira linha de código externa. Fundamental dentro do `switch` para impedir que ele continue executando os casos subsequentes acidentalmente (um fenômeno indesejado chamado de *fallthrough*).

- Continue
    - Pula o resto do código da iteração atual e volta direto para o início do loop. Muito usado para ignorar dados inválidos em uma lista (ex: ignorar instâncias de NPCs já mortos durante a checagem de dano em área) sem parar o processamento da lista toda.


### Exercícios Práticos

1. **A Máquina de Estados**
Crie um `switch` que receba um número de 1 a 4 representando uma ação (Atacar, Defender, Curar, Fugir). Use `break` corretamente e adicione um caso `default` para exibir uma mensagem de erro caso uma opção diferente seja digitada.

[Código do Exercício 1](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Flow-And-Loops/StateMachine.c)

2. **O Menu Persistente**
Utilize um `do-while` para solicitar um número de confirmação ao usuário ("Digite 0 para sair do servidor"). O loop só deve encerrar quando o valor digitado for exatamente 0.

[Código do Exercício 2](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Flow-And-Loops/PersistentMenu.c)

3. **Filtro Ágil**
Faça um loop `for` que conte de 1 a 20. Use uma condicional com o comando `continue` para pular a impressão de todos os números pares. O console deve exibir apenas os ímpares.

[Código do Exercício 3](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Flow-And-Loops/AgileFilter.c)

4. **Atribuição Expressa**
Crie uma variável `escudo_quebrado = 1`. Use o operador ternário para atribuir um valor a uma variável chamada `dano_recebido`. Se o escudo estiver quebrado, o dano será 100. Se não estiver (`0`), o dano será 50.

[Código do Exercício 4](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Flow-And-Loops/ExpressAssignment.c)

5. **Redenrização por Matriz**
Construa dois loops `for` aninhados (um `for` dentro do outro) para imprimir um triângulo retângulo feito de asteriscos (`*`). A primeira linha deve ter 1 asterisco, a segunda 2, crescendo até a quinta linha.

[Código do Exercício 5](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Flow-And-Loops/Matriz.c)


## **Tópico Quatro: Funções e Escopo de Variáveis**
Dividir a lógica em blocos reutilizáveis isola os dados na memória (na área chamada Stack).

### A Estrutura Básica de uma Função

Uma função é uma mini-fábrica: você define o que ela recebe (parâmetros), o que ela faz internamente, e o que ela devolve (retorno). O tipo de dado que vem antes do nome da função dita obrigatoriamente o que ela vai cuspir no final. Se a função não precisa devolver nada (ex: apenas imprimir um texto na tela), usamos o tipo `void`.

- Code Exemplo
    
    ```c
    #include <stdio.h>
    
    // Tipo de retorno (int) | Nome (calcularXP) | Parâmetros (int nivel_inimigo)
    int calcularXP(int nivel_inimigo) {
        int xp_base = 50;
        int xp_total = xp_base * nivel_inimigo;
        
        return xp_total; // Obrigatoriamente devolvemos um 'int'
    }
    
    int main() {
        // Chamamos a fábrica e guardamos o produto na variável
        int xp_ganho = calcularXP(3); 
        printf("Voce ganhou %d de XP!\n", xp_ganho);
        return 0;
    }
    ```

### Escopo Local (Stack de Memória)

Quando uma função é chamada, o sistema operacional separa um bloco temporário de memória chamado *Stack* (Pilha). Todas as variáveis criadas dentro das chaves `{ }` dessa função nascem ali. Assim que a função atinge o `return` ou a última chave, a memória é destruída.

Isso significa que pode ter dezenas de variáveis chamadas `dano` em funções diferentes, e uma nunca vai interferir na outra.

- Code Exemplo
    
    ```c
    #include <stdio.h>
    
    void calcularEsquiva() {
        // Esta variável só existe durante a execução desta função
        int chance = 30; 
        printf("A chance de esquiva é %d%%\n", chance);
    }
    
    int main() {
        calcularEsquiva();
        // Se tentarmos fazer printf("%d", chance); aqui, o compilador dará erro, 
        // pois a variável 'chance' já foi destruída e a main() não sabe quem ela é.
        return 0;
    }
    ```

### Escopo Global

Variáveis globais são declaradas no topo do arquivo, fora de qualquer função (incluindo a `main`). Elas residem no segmento de dados do programa e sobrevivem do momento em que o executável abre até ser fechado.

- Code Exemplo    
    ```c
    #include <stdio.h>
    
    // Declarada fora de tudo. Todos enxergam e podem alterar.
    int mundo_corrompido = 0; 
    
    void avancarHistoria() {
        mundo_corrompido = 1; // Alterou o estado global
    }
    
    int main() {
        printf("Status da corrupcao: %d\n", mundo_corrompido);
        avancarHistoria();
        printf("Status da corrupcao pos-evento: %d\n", mundo_corrompido);
        return 0;
    }
    ```

### Passagem por Valor (Fotocópia)
É o mecanismo de segurança padrão do C. Quando você envia uma variável de uma função para outra, o compilador tira uma cópia do número contido nela e envia. A função receptora pode multiplicar, subtrair ou zerar essa cópia sem afetar a variável original na memória.

Para que a função altere o valor real na sua `main`, você precisa pegar o `return` da função e sobrescrever a variável manualmente.

- Code Exemplo
    ```c
    #include <stdio.h>
    
    // A função recebe uma CÓPIA do hp, e não a variável original da main
    int usarPocao(int hp_copia) {
        hp_copia += 50; 
        printf("Dentro da funcao, o HP foi para: %d\n", hp_copia);
        return hp_copia;
    }
    
    int main() {
        int hp_verdadeiro = 20;
        
        // Passamos o hp_verdadeiro, mas a função só recebe o valor '20'
        int hp_novo = usarPocao(hp_verdadeiro); 
        
        // O hp original continua intacto até sobrescrevermos ele
        printf("Na main, antes da atribuicao, o HP verdadeiro continua: %d\n", hp_verdadeiro);
        
        // Aqui nós aplicamos o efeito permanentemente
        hp_verdadeiro = hp_novo; 
        printf("HP atualizado: %d\n", hp_verdadeiro);
        
        return 0;
    }
    ```

### Exercícios Práticos

1. **A Função Isolada**

Crie uma função chamada `calcularDano` que receba dois inteiros (`ataque` e `defesa`). A função deve retornar o valor do ataque menos a defesa. Se a defesa for maior que o ataque, retorne 0. Imprima o resultado chamando a função direto no `printf` da `main`.

[Código do Exercício 1](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Variable_Function/Isolated_Function.c)

2. **A Ilusão da Cópia**
Crie uma função `void curarPersonagem(int hp, int cura)`. Dentro dela, some a cura ao HP e imprima o novo valor informando que o personagem foi curado. Na `main`, declare uma variável `hp_atual = 50`, chame a função passando 20 de cura, e logo depois imprima `hp_atual` na `main`. Comprove que o HP original continuou sendo 50.

[Código do Exercício 2](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Variable_Function/Copy_Illusion.c)

3. **O Relógio Global**
Declare uma variável global `int turnos_jogados = 1;` fora de qualquer função. Crie uma função `void avancarTurno()` que apenas incrementa essa variável em 1. Chame essa função três vezes na `main` e imprima o valor final.

[Código do Exercício 3](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Variable_Function/Global_Clock.c)

4. **Menu Modularizado**
Refatore o menu que foi construido no tópico anterior. Mova todos os `printf` das opções e o `scanf` para dentro de uma função `int exibirMenu()`. A função deve retornar o número digitado pelo usuário. A sua `main` ficará muito mais enxuta, servindo apenas para rodar o loop e o `switch`.

[Código do Exercício 4](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Variable_Function/Menu.c)

5. **Cálculo Encapsulado**
Crie uma função que receba um número inteiro e calcule o fatorial dele internamente utilizando um loop `for`. Retorne o resultado final e exiba na `main`.

[Código do Exercício 5](/Linguagem_C/Fase_1-Fundamentos/Module-Um/Exercicios_Praticos/Variable_Function/Encapsulated.c)