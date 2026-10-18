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

## 🖥️ Trilha de Especialização: Linguagem C

<div align="center">
  <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C" />
</div>

<br>

A linguagem C é a base de toda a arquitetura deste repositório. Aqui, o estudo vai muito além da sintaxe: o objetivo é o controle manual do hardware. 

Sem *Garbage Collector* e sem abstrações modernas, os códigos desta trilha dissecam o comportamento da memória RAM (Stack e Heap), a manipulação em nível de processador (operações bit a bit) e a construção purista de algoritmos críticos.

---

## 🗺️ Mapa de Fases

O aprendizado está estruturado em **3 grandes Fases**, totalizando 15 módulos práticos. Abaixo está o resumo de cada ciclo e o link para acessar seus respectivos conteúdos e avaliações.

### [Fase 1: Arquitetura de Memória e Estruturas Fundamentais](/Linguagem_C/Fase_1-Fundamentos/README.md)
**Status:** `Em Andamento` | **Tamanho:** `5 Módulos`

O ponto de partida lógico. Esta fase opera puramente via terminal (CLI) e foca em construir a fundação de como o C "pensa".
*   **Conteúdo da Fase:** 
    *   Sintaxe base, otimização de fluxo e operadores Bitwise.
    *   Agrupamento de dados na memória (Arrays, Strings puras e Structs).
    *   A quebra de paradigma: Ponteiros e manipulação direta de endereços de memória.
    *   Alocação Dinâmica (Heap) e o controle manual do tempo de vida das variáveis.
    *   Construção do zero de Estruturas de Dados (Listas encadeadas, Pilhas, Filas e Árvores).

<br>

### Fase 2: Sistemas Operacionais e Alta Performance
**Status:** `⏸️ Planejado` | **Tamanho:** `5 Módulos`

O avanço para a integração com o Sistema Operacional, quebrando o limite de processamento de um único núcleo.
*   **Conteúdo da Fase:**
    *   Programação Concorrente com POSIX Threads (Multithreading) e Mutexes para evitar colisão de dados.
    *   Comunicação Inter-processos (IPC) usando Memória Compartilhada e Sockets (Rede).
    *   Interação direta com o SO via *System Calls* e manipulação de *File Descriptors*.
    *   Algoritmos avançados de I.A. (Pathfinding com grafos e busca de rotas).
    *   *Profiling* e Otimização extrema para varredura de *Memory Leaks* com ferramentas como Valgrind.

<br>

### Fase 3: Motores Gráficos e Integração Externa
**Status:** `⏸️ Planejado` | **Tamanho:** `5 Módulos`

A ponte entre o código de terminal e o desenvolvimento profissional de jogos e softwares comerciais.
*   **Conteúdo da Fase:**
    *   Configuração de *Build Systems* (Makefiles e CMake) para projetos grandes.
    *   Matemática aplicada a motores (Vetores 2D, matrizes de transformação e física de colisão).
    *   Renderização gráfica 2D em C acoplando bibliotecas de baixo nível (como Raylib ou SDL2).
    *   Criação de *DLLs* dinâmicas.
    *   **Interoperabilidade:** Como embutir código C super-rápido dentro de um script C# na Unity.

---
*Cada Fase exige a conclusão do **Projeto Integrador** para ser dada como finalizada.*
---

## 🚀 Próximos Passos (C# e C++)

*As documentações detalhadas e os índices para C# e C++ serão gerados aqui assim que as Fases focadas nestas linguagens forem iniciadas.*
