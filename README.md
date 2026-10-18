# ⚙️ Estudos em Arquitetura e Memória: Família C

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![C#](https://img.shields.io/badge/c%23-%23239120.svg?style=for-the-badge&logo=c-sharp&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)

Fala, Devs! 👾

Este repositório é o meu laboratório pessoal e portfólio de estudos dedicado ao ecossistema das linguagens da família C (C, C# e C++). O propósito aqui não é apenas rodar códigos, mas dissecar como o processador e a memória RAM se comportam em diferentes níveis de abstração.

---

## 🎯 Objetivo

O foco principal deste repositório é o aprimoramento técnico contínuo. Quero documentar a minha evolução na compreensão do **gerenciamento manual de memória**, **otimização em baixo nível** (bitwise, cache, ponteiros) e **arquitetura de software**. 

Cada linha de código aqui tem um propósito estrutural, construindo a base necessária para o desenvolvimento de sistemas complexos, motores de renderização, automações de alta performance e mecânicas lógicas avançadas.

---

## 📂 Estrutura de Aprendizado

Para manter o repositório organizado e com uma curva de aprendizado lógica, os estudos estão divididos hierarquicamente em:

- **Fases:** Grandes ciclos de aprendizado (ex: Fase 1 - Fundamentos de Baixo Nível).
  - **Módulos:** Agrupamento de conhecimentos específicos dentro de uma fase.
    - **Tópicos:** Exercícios práticos, lógicas e resumos teóricos focados.
    - **Avaliações:** Todo módulo é concluído com uma *Prova Teórica* e um *Desafio Prático* integrador.

---

## 📊 Status das Linguagens

| Linguagem | Foco de Estudo | Módulos Concluídos | Status |
| :---: | :--- | :---: | :---: |
| **C** | Manipulação de memória, ponteiros, otimização bit a bit e estruturas de dados dinâmicas. | 1 | 🟢 Em Andamento |
| **C#** | Orientação a Objetos, desenvolvimento de motores de jogos (Unity), arquitetura de aplicações de alto nível. | 0 | ⚪ Não Iniciado |
| **C++** | Alta performance combinada com Orientação a Objetos, alocação RAII e sistemas críticos. | 0 | ⚪ Não Iniciado |

---

## 💻 Trilha de Desenvolvimento em C

Abaixo está o log de desenvolvimento da linguagem C. Você pode clicar nos links para ir direto aos códigos e resumos de cada módulo.

### 📚 Fase 1: Fundamentos e Controle de Memória

#### [Módulo 1: O Aquecimento (Sintaxe e Lógica)](/link-para-a-pasta-do-modulo-1)
*Status: Concluído* ✔️

Este módulo serviu para consolidar a sintaxe base do C, garantindo que o controle de fluxo e as operações primitivas estejam otimizadas antes de avançarmos para o gerenciamento manual de memória.

**O que eu aprendi e apliquei:**
- Comportamento da memória com *Overflow* em tipos numéricos (`unsigned`).
- Otimização extrema de processamento utilizando operadores **Bitwise** (`<<`, `>>`, `&`, `^`) em substituição a operadores aritméticos comuns.
- Controle de fluxo otimizado usando *Jump Tables* (`switch/case`) e curto-circuito em operadores lógicos.
- Isolamento de escopo na *Stack* através de funções modulares e passagem de parâmetros por valor.

**Provas do Módulo:**
- [📝 Prova Teórica: Regras do Compilador e Layout de Memória](/link-para-prova-teorica)
- [🛠️ Desafio Prático: Calculadora Modular CLI com Otimização de Bits](/link-para-calculadora)

---

#### [Módulo 2: O Coração do C (Estruturação)](/link-para-a-pasta-do-modulo-2)
*Status: Em Andamento* 🔄

**O que estou estudando no momento:**
- Alocação contígua em Arrays Unidimensionais e Multidimensionais.
- A armadilha do *Buffer Overflow* silencioso na arquitetura C.
- Manipulação de Strings puras (`<string.h>`).
- Agrupamento de tipos de dados heterogêneos utilizando `Structs`.

---

## 🚀 Próximos Passos (C# e C++)

*As documentações detalhadas e os índices para C# e C++ serão gerados aqui assim que as Fases focadas nestas linguagens forem iniciadas.*
