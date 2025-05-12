# Super_Trunfo_Lógica

# Desafio: nível novato

• Comparando Cartas do Super Trunfo

1. O que você vai fazer

Você implementará a lógica para comparar duas cartas e determinar a vencedora com base em um único atributo numérico (como população, área, PIB, etc.). Este desafio é uma continuação do desafio do tema anterior, onde você desenvolveu o cadastro das cartas e você poderá reaproveitar o código de cadastro de cartas que já foi desenvolvido. O foco deste nível é a comparação entre duas cartas já cadastradas, utilizando estruturas de decisão if e if-else.

2. Requisitos funcionais

Seu programa em C deverá:

- Receber os dados de duas cartas: O programa deve receber os dados de duas cartas do Super Trunfo. Utilize o código desenvolvido no desafio anterior para o cadastro das cartas. As cartas devem conter os seguintes atributos:
 
Estado (string)
Código da carta (string)
Nome da cidade (string)
População (int)
Área (float)
PIB (float)
Número de pontos turísticos (int)
Calcular Densidade Populacional e PIB per capita: O programa deve calcular e exibir:
Densidade Populacional: População / Área
PIB per capita: PIB / População
 
- Comparar um atributo escolhido: Você deverá escolher apenas um dos atributos numéricos (População, Área, PIB, Densidade Populacional ou PIB per capita) para realizar a comparação entre as duas cartas. Essa escolha deve ser feita diretamente no código, não pela entrada do usuário.
 
- Determinar a carta vencedora:
 
Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.
Para Densidade Populacional, a carta com o menor valor vence.
 
- Exibir o resultado da comparação: O programa deve exibir, de forma clara, qual carta venceu a comparação, incluindo o atributo utilizado na comparação e os valores das duas cartas para aquele atributo. Exemplo:
 
Comparação de cartas (Atributo: População):

Carta 1 - São Paulo (SP): 12.300.000
Carta 2 - Rio de Janeiro (RJ): 6.000.000
Resultado: Carta 1 (São Paulo) venceu!

3. Requisitos não funcionais

Usabilidade: A saída do programa deve ser clara e fácil de entender.
Legibilidade: O código deve ser bem organizado, com comentários explicando a lógica utilizada. Utilize nomes de variáveis descritivos.
Documentação: Comente seu código, explicando o propósito de cada parte.
Simplificações para o nível básico

Neste nível, você irá comparar apenas duas cartas pré-definidas no código.
 
A escolha do atributo para comparação será feita diretamente no código, não haverá interação com o usuário para escolher o atributo.
 
Não é necessário implementar menus interativos neste nível. Foque na lógica de comparação utilizando if e if-else.

# Desafio: nível aventureiro

1. O que você vai fazer

Neste desafio, o Super Trunfo fica mais interessante! Você implementará um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países. Além disso, você usará estruturas de decisão aninhadas (if-else dentro de if-else) para criar uma lógica de comparação mais complexa, considerando regras específicas para cada atributo. Este desafio é uma continuação do desafio anterior, onde você implementou o cadastro das cartas.

2. Requisitos funcionais

- Menu Interativo: Criar um menu interativo no terminal usando a estrutura switch que permita ao jogador escolher qual atributo será usado para comparar as cartas. O menu deve ser claro e fácil de usar.
 
- Comparação de Atributos: Implementar a lógica de comparação entre duas cartas com base no atributo selecionado pelo jogador. Os atributos disponíveis são:
 
Nome do país (string - usado apenas para exibir informações, não para comparação direta)
População (int)
Área (float)
PIB (float)
Número de pontos turísticos (int)
Densidade demográfica (float - já calculada no desafio anterior).
 
- Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.
 
- Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
 
O nome dos dois países.
O atributo usado na comparação.
Os valores do atributo para cada carta.
Qual carta venceu.
Em caso de empate, exibir a mensagem "Empate!".

3. Requisitos não funcionais

Usabilidade: O menu e as mensagens exibidas no terminal devem ser intuitivos e fáceis de entender.
Performance: O sistema deve responder rapidamente às ações do usuário.
Manutenibilidade: Escreva um código limpo, organizado e bem comentado.
Segurança: (Embora menos crítico neste nível, comece a pensar em como seu código poderia lidar com entradas inválidas do usuário, como a escolha de uma opção inexistente no menu. Um default no switch pode ajudar).

Simplificações para o nível intermediário

Você pode usar as cartas que já foram cadastradas no desafio anterior. Não é necessário implementar o cadastro novamente neste nível.
 
Foque na criação do menu com switch e na lógica de comparação com if-else (incluindo comparações aninhadas onde fizer sentido).
 
Implemente a comparação para apenas duas cartas.
