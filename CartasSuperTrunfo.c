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


 char estado;  //declarando as variaveis da carta 1
 char codigo_da_carta[20];
 char nome_da_cidade[20];
 int numero_de_pontos_turisticos;  
 float area, pib;
 unsigned long int populacao;
 
 
   
 printf("escolha uma letra que representa o estado de A ate H\n");  //incializando as variaveis com o scanf
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
 

 float densidade_populacional; // ainda declarando variaveis da carta 1
 float pib_per_capita;
 densidade_populacional= populacao / area;
 pib_per_capita= pib / populacao;
 float superpoder= numero_de_pontos_turisticos + area + pib + populacao + pib_per_capita - densidade_populacional;


 char estado2;    // declarando variaveis da carta 2
 char codigo_da_carta2[20];
 char nome_da_cidade2[20];
 int numero_de_pontos_turisticos2;  
 float area2, pib2;
 unsigned long int populacao2;
 
 
 
 
 printf("escolha uma letra que representa o segundo estado de A ate H\n"); //incializando as variaveis com o scanf
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
 printf("digite o numero de pontos turisticos da segunda cidade\n\n");
 scanf("%d",&numero_de_pontos_turisticos2);

 float densidade_populacional2;  // ainda declarando variaveis da carta 2, eu diferenciei a carta 1 da carta 2 apenas colocando o numero "2" no final das variaveis da segunda carta
 float pib_per_capita2;
 densidade_populacional2= populacao2 / area2;
 pib_per_capita2= pib2 / populacao2;
 float superpoder2= numero_de_pontos_turisticos2 + area2 + pib2 + populacao2 + pib_per_capita2 - densidade_populacional2;
 
 
 
 
 
 printf("Carta 1:\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nArea: %.2f km2\nPIB: %.2f\nNumero de Pontos Turisticos: %d\n",estado,estado, codigo_da_carta, nome_da_cidade, populacao, area,pib, numero_de_pontos_turisticos);
 printf("Densidade Populacional: %.2f km2\nPIB per Capita: %.2f\n",densidade_populacional, pib_per_capita);
 printf("Super poder: %.2f\n\n",superpoder);
 printf("Carta 2:\nEstado: %c\nCodigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nArea: %.2f km2\nPIB: %.2f\nNumero de Pontos Turisticos: %d\nDensidade Populacional:%.2f km2\nPIB per Capita:%.2f\n",estado2,estado2, codigo_da_carta2, nome_da_cidade2, populacao2, area2,pib2, numero_de_pontos_turisticos2,densidade_populacional2,pib_per_capita2);
 printf("Densidade Populacional: %.2f km2\nPIB per Capita: %.2f\n",densidade_populacional2, pib_per_capita2);
 printf("Super poder: %.2f\n\n",superpoder2);  // imprimindo os valores das variaveis



int escolha_da_cidade;
int escolha_do_atributo; //variaveis de escolha e de soma
float soma;
float soma2;


printf("escolha uma cidade pelo numero: numero 1 %s ou numero 2 %s?\n",nome_da_cidade,nome_da_cidade2);
scanf("%d",&escolha_da_cidade);

switch(escolha_da_cidade){
    case 1: printf("cidade escolhida foi: %s\n",nome_da_cidade);break;
    case 2: printf("cidade escolhida foi: %s\n",nome_da_cidade2);break; //switch para determinar qual cidade foi escolhida
    default: printf("numero invalido");
    break;
}
printf("escolha um atributo pelo numero para comparar: 1 População, 2 Área, 3 Pib, 4 Número de pontos turísticos, 5 Densidade demográfica\n");
scanf("%d",&escolha_do_atributo);  // scanf para iniciacilar a variavel de escolha do atributo

switch(escolha_do_atributo){           //switch para determinar o atributo vencedor
    case 1: if(populacao>populacao2){printf("a cidade %s venceu\nAtributo: População da cidade 1: %d\n População da cidade 2: %d\n",nome_da_cidade,populacao,populacao2); soma+=populacao;soma2+=populacao2;}
    else if(populacao<populacao2){printf("a cidade %s venceu\nAtributo: População da cidade 1: %d\n População da cidade 2: %d\n",nome_da_cidade2,populacao,populacao2); soma+=populacao;soma2+=populacao2;}
    else{printf("empate!\nAtributo: População da cidade 1: %d é igual a População da cidade 2: %d\n",populacao,populacao2);} 
    break;
    
    case 2: if(area>area2){printf("a cidade %s venceu\nAtributo: Área da cidade 1: %.2f\n Área da cidade 2: %.2f\n",nome_da_cidade,area,area2); soma+=area;soma2+=area2;}
    else if(area<area2){printf("a cidade %s venceu\nAtributo: Área da cidade 1: %.2f\n Área da cidade 2: %.2f\n",nome_da_cidade2,area,area2); soma+=area;soma2+=area2;}
    else{printf("empate!\nAtributo: Área da cidade 1: %.2f é igual a Área da cidade 2: %.2f\n",area,area2);} 
    break;
    
    case 3: if(pib>pib2){printf("a cidade %s venceu\nAtributo: Pib da cidade 1: %.2f\n Pib da cidade 2: %.2f\n",nome_da_cidade,pib,pib2); soma+=pib;soma2+=pib2;}
    else if(pib<pib2){printf("a cidade %s venceu\nAtributo: Pib da cidade 1: %.2f\n Pib da cidade 2: %.2f\n",nome_da_cidade2,pib,pib2); soma+=pib;soma2+=pib2;}
    else{printf("empate!\nAtributo: Pib da cidade 1: %.2f é igual a Pib da cidade 2: %.2f\n",pib,pib2);} 
    break;
    
    case 4: if(numero_de_pontos_turisticos>numero_de_pontos_turisticos2)
    {printf("a cidade %s venceu\nAtributo: Número de pontos turísticos da cidade 1: %d\n Número de pontos turísticos da cidade 2: %d\n",nome_da_cidade, numero_de_pontos_turisticos, numero_de_pontos_turisticos2); soma+=numero_de_pontos_turisticos;soma2+=numero_de_pontos_turisticos2;}
    else if(numero_de_pontos_turisticos<numero_de_pontos_turisticos2)
    {printf("a cidade %s venceu\nAtributo: Número de pontos turísticos da cidade 1: %d\n Número de pontos turísticos da cidade 2: %d\n",nome_da_cidade2,numero_de_pontos_turisticos, numero_de_pontos_turisticos2); soma+=numero_de_pontos_turisticos;soma2+=numero_de_pontos_turisticos2;}
    else{printf("empate!\nAtributo: Número de pontos turísticos da cidade 1: %d é igual a Número de pontos turísticos da cidade 2: %d\n",numero_de_pontos_turisticos, numero_de_pontos_turisticos2);} 
    break;
    
    case 5: if(densidade_populacional<densidade_populacional2)
    {printf("a cidade %s venceu\nAtributo: Densidade demográfica da cidade 1: %.2f\n Densidade demográfica da cidade 2: %.2f\n",nome_da_cidade, densidade_populacional, densidade_populacional2);soma-=densidade_populacional;soma2-=densidade_populacional2;}
    else if(densidade_populacional>densidade_populacional2)
    {printf("a cidade %s venceu\nAtributo: Densidade demográfica da cidade 1: %.2f\n Densidade demográfica da cidade 2: %.2f\n",nome_da_cidade2,densidade_populacional, densidade_populacional2); soma-=densidade_populacional;soma2-=densidade_populacional2;}
    else{printf("empate!\nAtributo: Densidade demográfica da cidade 1: %.2f é igual a Densidade demográfica da cidade 2: %.2f\n",densidade_populacional, densidade_populacional2);} 
    break;
    default: printf("numero invalido");
    break;
}

switch(escolha_do_atributo){
    case 1: printf("escolha um atributo pelo numero para comparar: 2 Área, 3 Pib, 4 Número de pontos turísticos, 5 Densidade demográfica\n");break;
    case 2: printf("escolha um atributo pelo numero para comparar: 1 População, 3 Pib, 4 Número de pontos turísticos, 5 Densidade demográfica\n");break;  //switch para nao deixar o menu repetir a opçao já escolhida
    case 3: printf("escolha um atributo pelo numero para comparar: 1 População, 2 Área, 4 Número de pontos turísticos, 5 Densidade demográfica\n");break;
    case 4: printf("escolha um atributo pelo numero para comparar: 1 População, 2 Área, 3 Pib, 5 Densidade demográfica\n");break;
    case 5: printf("escolha um atributo pelo numero para comparar: 1 População, 2 Área, 3 Pib, 4 Número de pontos turísticos \n");break;
    default:printf("numero invalido\n");break;
}

int escolha_do_atributo2; // escolha do segundo atributo
scanf("%d",&escolha_do_atributo2);



if(escolha_do_atributo2!=escolha_do_atributo){switch(escolha_do_atributo2){ // switch para determinar o outro atributo vencedor
    case 1: if(populacao>populacao2){printf("a cidade %s venceu\nAtributo: População da cidade 1: %d\n População da cidade 2: %d\n",nome_da_cidade,populacao,populacao2); soma+=populacao;soma2+=populacao2;}
    else if(populacao<populacao2){printf("a cidade %s venceu\nAtributo: População da cidade 1: %d\n População da cidade 2: %d\n",nome_da_cidade2,populacao,populacao2); soma+=populacao;soma2+=populacao2;}
    else{printf("empate!\nAtributo: População da cidade 1: %d é igual a População da cidade 2: %d\n",populacao,populacao2);} 
    break;
    
    case 2: if(area>area2){printf("a cidade %s venceu\nAtributo: Área da cidade 1: %.2f\n Área da cidade 2: %.2f\n",nome_da_cidade,area,area2); soma+=area;soma2+=area2;} 
    else if(area<area2){printf("a cidade %s venceu\nAtributo: Área da cidade 1: %.2f\n Área da cidade 2: %.2f\n",nome_da_cidade2,area,area2); soma+=area;soma2+=area2;}
    else{printf("empate!\nAtributo: Área da cidade 1: %.2f é igual a Área da cidade 2: %.2f\n",area,area2);} 
    break;
    
    case 3: if(pib>pib2){printf("a cidade %s venceu\nAtributo: Pib da cidade 1: %.2f\n Pib da cidade 2: %.2f\n",nome_da_cidade,pib,pib2);soma+=pib;soma2+=pib2;}
    else if(pib<pib2){printf("a cidade %s venceu\nAtributo: Pib da cidade 1: %.2f\n Pib da cidade 2: %.2f\n",nome_da_cidade2,pib,pib2);soma+=pib;soma2+=pib2;}
    else{printf("empate!\nAtributo: Pib da cidade 1: %.2f é igual a Pib da cidade 2: %.2f\n",pib,pib2);} 
    break;
    
    case 4: if(numero_de_pontos_turisticos>numero_de_pontos_turisticos2)
    {printf("a cidade %s venceu\nAtributo: Número de pontos turísticos da cidade 1: %d\n Número de pontos turísticos da cidade 2: %d\n",nome_da_cidade, numero_de_pontos_turisticos, numero_de_pontos_turisticos2);soma+=numero_de_pontos_turisticos;soma2+=numero_de_pontos_turisticos2;}
    else if(numero_de_pontos_turisticos<numero_de_pontos_turisticos2)
    {printf("a cidade %s venceu\nAtributo: Número de pontos turísticos da cidade 1: %d\n Número de pontos turísticos da cidade 2: %d\n",nome_da_cidade2,numero_de_pontos_turisticos, numero_de_pontos_turisticos2);soma+=numero_de_pontos_turisticos;soma2+=numero_de_pontos_turisticos2;}
    else{printf("empate!\nAtributo: Número de pontos turísticos da cidade 1: %d é igual a Número de pontos turísticos da cidade 2: %d\n",numero_de_pontos_turisticos, numero_de_pontos_turisticos2);} 
    break;
    
    case 5: if(densidade_populacional<densidade_populacional2)
    {printf("a cidade %s venceu\nAtributo: Densidade demográfica da cidade 1: %.2f\n Densidade demográfica da cidade 2: %.2f\n",nome_da_cidade, densidade_populacional, densidade_populacional2);soma-=densidade_populacional;soma2-=densidade_populacional2;}
    else if(densidade_populacional>densidade_populacional2)
    {printf("a cidade %s venceu\nAtributo: Densidade demográfica da cidade 1: %.2f\n Densidade demográfica da cidade 2: %.2f\n",nome_da_cidade2,densidade_populacional, densidade_populacional2);soma-=densidade_populacional;soma2-=densidade_populacional2;}
    else{printf("empate!\nAtributo: Densidade demográfica da cidade 1: %.2f é igual a Densidade demográfica da cidade 2: %.2f\n",densidade_populacional, densidade_populacional2);} 
    break;
    default: printf("numero invalido");
    break;
}}else{printf("opção invalida.");}

printf("A soma dos atributos para cada carta é cidade %s: %.2f cidade %s: %.2f\n",nome_da_cidade,soma,nome_da_cidade2,soma2); // imprime o valor das variaveis de soma
if(soma>soma2){printf("A cidade %s venceu\n",nome_da_cidade);}else if(soma2>soma){printf("A cidade %s venceu\n",nome_da_cidade2);}else{printf("Empate!\n");} //condição para imprimir a variavel de maior valor
 
  
return 0;
}
