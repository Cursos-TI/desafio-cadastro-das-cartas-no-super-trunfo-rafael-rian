#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


 char estado;
 char codigo_da_carta[20];
 char nome_da_cidade[20];
 int populacao, numero_de_pontos_turisticos;  
 float area, pib;


   
 printf("escolha uma letra que representa o estado de A ate H\n");
 scanf("%c",&estado);
 printf("escolha o codigo da carta de 01 a 04\n");
 scanf("%s",&codigo_da_carta);
 printf("nome da cidade?\n");
 scanf("%s",&nome_da_cidade);
 printf("numero da população\n");
 scanf("%d",&populacao);
 printf("numero da area em km quadrados\n");
 scanf("%f",&area);
 printf("digite o numero do pib\n");
 scanf("%f",&pib);
 printf("digite o numero de pontos turisticos\n");
 scanf("%d",&numero_de_pontos_turisticos);
 
 char estado2;
 char codigo_da_carta2[20];
 char nome_da_cidade2[20];
 int populacao2, numero_de_pontos_turisticos2;  
 float area2, pib2;
 
 printf("escolha uma letra que representa o segundo estado de A ate H\n");
 scanf(" %c",&estado2);
 printf("escolha o codigo da segunda carta de 01 a 04\n");
 scanf("%s",&codigo_da_carta2);
 printf("nome da segunda cidade?\n");
 scanf("%s",&nome_da_cidade2);
 printf("numero da segunda população\n");
 scanf("%d",&populacao2);
 printf("numero da segunda area em km quadrados\n");
 scanf("%f",&area2);
 printf("digite o numero do segundo pib\n");
 scanf("%f",&pib2);
 printf("digite o numero de pontos turisticos da segunda cidade\n");
 scanf("%d",&numero_de_pontos_turisticos2);

 printf("Carta 1:\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nArea: %.2f km2\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n",estado,estado, codigo_da_carta, nome_da_cidade, populacao, area,pib, numero_de_pontos_turisticos);
 
 printf("Carta 2:\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nArea: %.2f km2\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n",estado2,estado2, codigo_da_carta2, nome_da_cidade2, populacao2, area2,pib2, numero_de_pontos_turisticos2);


    return 0;
}
