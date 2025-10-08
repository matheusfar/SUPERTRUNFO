🃏 Super Trunfo – Nível Mestre

Implementando Comparações Avançadas com Atributos Múltiplos em C

📘 Descrição do Desafio

Este é o desafio final do projeto Super Trunfo, onde aplicamos todos os conceitos aprendidos sobre estruturas de decisão, operadores e lógica condicional em C.
O objetivo é criar um sistema inteligente capaz de comparar duas cartas de países, permitindo ao jogador escolher dois atributos diferentes para determinar o vencedor da rodada.

O jogo utiliza menus dinâmicos, operadores ternários e lógica de soma de atributos para tornar a comparação mais realista e desafiadora.

🎯 Objetivo

Desenvolver um programa em C que:

Compare duas cartas com base em dois atributos numéricos escolhidos pelo jogador;

Utilize menus dinâmicos e estruturas de decisão (switch);

Exiba os resultados de forma clara e organizada.

⚙️ Requisitos Funcionais
1️⃣ Escolha de Dois Atributos

O jogador deve escolher dois atributos diferentes entre os disponíveis (ex: PIB, área, população, densidade demográfica etc.).

O sistema deve impedir que o mesmo atributo seja escolhido duas vezes.

2️⃣ Comparação com Múltiplos Atributos

Cada atributo é comparado individualmente.

Regra geral: vence quem tiver o maior valor.

Exceção: na Densidade Demográfica, vence quem tiver o menor valor.

3️⃣ Soma dos Atributos

Após comparar os dois atributos, o sistema soma os valores correspondentes de cada carta.

A carta com a maior soma total é declarada vencedora.

4️⃣ Tratamento de Empates

Se a soma dos dois atributos for igual, o sistema exibe:

Empate!

5️⃣ Menus Dinâmicos

O menu de seleção dos atributos é dinâmico, ou seja:

Após escolher o primeiro atributo, ele não aparece mais como opção para o segundo.

Implementado usando switch-case para tornar o código organizado e modular.

6️⃣ Exibição Clara do Resultado

O programa deve exibir de forma estruturada:

O nome dos dois países;

Os dois atributos utilizados na comparação;

Os valores de cada atributo em cada carta;

A soma total dos atributos;

E o resultado final da rodada (quem venceu ou se houve empate).
