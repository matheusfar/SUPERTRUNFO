🃏 Super Trunfo em C

Este projeto é uma versão simplificada do jogo Super Trunfo, implementada em C.
O objetivo é comparar atributos de duas cartas de cidades de diferentes estados para decidir qual vence em determinada categoria.

📖 Objetivo

Neste primeiro nível, o objetivo é construir a base do jogo:

Permitir o cadastro das cartas de cidades.

Armazenar as informações em variáveis apropriadas.

Exibir os dados cadastrados de forma clara e organizada.

🚀 Como compilar e executar

Certifique-se de ter o compilador gcc instalado.

Clone este repositório ou baixe os arquivos.

No terminal, execute:

gcc super_trunfo.c -o super_trunfo
./super_trunfo

📝 Como jogar

O usuário deverá cadastrar duas cartas com os seguintes atributos:

Estado: Uma letra de A a H (representando um dos oito estados). char

Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). char[]

Nome da Cidade: Nome da cidade. char[]

População: Número de habitantes. int

Área (km²): Área da cidade. float

PIB: Produto Interno Bruto da cidade. float

Número de Pontos Turísticos: Quantidade de pontos turísticos. int

Após o cadastro, o programa exibirá as informações de cada carta formatadas.

📌 Exemplo de saída:

Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Pontos turísticos: 50

🏆 Regras de comparação

Na próxima fase do desafio, será possível comparar as cartas:

População, Área, PIB, Pontos Turísticos, PIB per capita, Super Poder
→ vence o maior valor.

Densidade demográfica
→ vence o menor valor.

Valores iguais resultam em empate.

🛠️ Tecnologias usadas

Linguagem C

Compilador GCC

✅ Requisitos funcionais

Estruturas de controle: if-else, switch-case

Entrada e saída padrão (scanf / printf)

Cadastro de duas cartas

Exibição organizada dos dados cadastrados

⚙️ Requisitos não funcionais

Usabilidade: fácil de usar, com instruções claras.

Legibilidade: código indentado e comentado.

Corretude: funcionamento sem erros de compilação ou execução.

🎯 Simplificações do desafio

Apenas duas cartas devem ser cadastradas.

Não é necessário implementar repetição (for, while) ou estruturas de decisão complexas neste nível.

O código deve ser uma sequência simples de instruções.

📌 Entrega do projeto

Crie um repositório público no GitHub.

Adicione o arquivo super_trunfo.c.

Compile e teste localmente.

Faça commit e push para o repositório.

Envie o link do repositório pela plataforma SAVA.

✍️ Autor

Projeto desenvolvido como exercício acadêmico para prática de programação em C.
