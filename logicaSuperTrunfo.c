#include <stdio.h>

int main() {
  // ########################### DECLARAÇÃO DE VARIÁVEIS
  // ###########################

  // carta 1
  int turismo1;
  unsigned long int populacao1;
  float area1, pib1, densidadePopulacional1, pibpc1, superPoder1;
  char primeiroEstado[30];
  char cidade1[30];
  char codigo1[3];
  
  // carta 2
  int turismo2;
  unsigned long int populacao2;
  float area2, pib2, densidadePopulacional2, pibpc2, superPoder2;
  char segundoEstado[30];
  char cidade2[30];
  char codigo2[3];

  // comparação de cartas
  int comparacao;

  
  // ############################ CADASTRO DA PRIMEIRA CARTA
  // ############################
  printf("\n==== CADASTRO DA PRIMEIRA CARTA ====\n");

  printf("Nome do estado (SEM ESPAÇOS; ex. Rio-de-Janeiro):\n");
  (void)scanf("%s", primeiroEstado); // recebe um inteiro e armazena na variável b
  printf("Código do estado (ex. RJ);\n");
  (void)scanf("%s", codigo1);
  printf("Nome da cidade (SEM ESPAÇOS; ex. Rio-de-Janeiro):\n");
  (void)scanf("%s", cidade1);
  printf("População da Cidade:\n");
  (void)scanf("%lu", &populacao1);
  printf("Área em Km² (ex. 123456.78):\n");
  (void)scanf("%f", &area1);
  printf("Produto Interno Bruto (PIB):\n");
  (void)scanf("%f", &pib1);
  printf("N° de Pontos Turísticos:\n");
  (void)scanf("%d", &turismo1);

//   // cálculo de densidade Pop., PPC e super poder
  densidadePopulacional1 = (float)(populacao1 / area1);
  pibpc1 = (float)(pib1 / populacao1);
  superPoder1 = (float)((float)populacao1 + area1 + pib1 + pibpc1 + (1 / densidadePopulacional1));

  // ############################ CADASTRO DA SEGUNDA CARTA
  // ############################
  printf("\n==== CADASTRO DA SEGUNDA CARTA ====\n");

  printf("Nome do estado (SEM ESPAÇOS; ex. São-Paulo):\n");
  (void)scanf("%s", segundoEstado);
  printf("Código do estado (ex. SP):\n");
  (void)scanf("%s", codigo2);
  printf("Nome da cidade (SEM ESPAÇOS; ex. São-Paulo):\n");
  (void)scanf("%s", cidade2);
  printf("População da Cidade:\n");
  (void)scanf("%lu", &populacao2);
  printf("Área em Km² (ex. 123456.78):\n");
  (void)scanf("%f", &area2);
  printf("Produto Interno Bruto (PIB):\n");
  (void)scanf("%f", &pib2);
  printf("N° de Pontos Turísticos:\n");
  (void)scanf("%d", &turismo2);

  // cálculo de densidade e PPC
  densidadePopulacional2 = (float)(populacao2 / area2);
  pibpc2 = (float)(pib2 / populacao2);
  superPoder2 = (float)((float)populacao2 + area2 + pib2 + pibpc2 + (1 / densidadePopulacional2));

  // ############################ IMPRESSÃO DOS RESULTADOS
  // ############################
  printf("\n=====COMPARAÇÃO DAS CARTAS=====\n");

  printf("ESCOLHA QUAL ATRIBUTO VOCÊ VAI USAR (digite o número correspondente)\n");
  printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
  (void)scanf("%d", &comparacao);

  if (comparacao >= 6 || comparacao <= 0) {
    printf("OPÇÃO INVÁLIDA");
  };
  
  switch(comparacao){
    case 1:
     printf("\nPOPULAÇÃO\n");
     printf("Carta 1 - %s (%s): %lu\n", cidade1, codigo1, populacao1);
     printf("Carta 2 - %s (%s): %lu\n", cidade2, codigo2, populacao2);
     if (populacao1 > populacao2)
     {
        printf("Resultado: Carta 1 venceu!\n");
     } else if (populacao1 == populacao2)
     {
        printf("Resultado: Empate!\n");
     } else {
       printf("Resultado: Carta 2 venceu!\n");
     };
    break;

    case 2:
     printf("\nÁREA\n");
     printf("Carta 1 - %s (%s): %.3f\n", cidade1, codigo1, area1);
     printf("Carta 2 - %s (%s): %.3f\n", cidade2, codigo2, area2);
     if (area1 > area2)
     {
        printf("Resutado: Carta 1 venceu!\n");
     } else if (area1 == area2)
     {
        printf("Resutado: Empate!\n");
     } else {
       printf("Resutado: Carta 2 venceu!\n");
     };
     break;

     case 3:
     printf("\nPIB\n");
     printf("Carta 1 - %s (%s): %.2f\n", cidade1, codigo1, pib1);
     printf("Carta 2 - %s (%s): %.2f\n", cidade2, codigo2, pib2);
     if (pib1 > pib2)
     {
        printf("Resultado: Carta 1 venceu!\n");
     } else if (pib1 == pib2)
     {
        printf("Resultado: Empate!\n");
     } else {
       printf("Resultado: Carta 2 venceu!\n");
     };
     break;

     case 4:
     printf("\nPONTOS TURÍSTICOS\n");
     printf("Carta 1 - %s (%s): %d\n", cidade1, codigo1, turismo1);
     printf("Carta 2 - %s (%s): %d\n", cidade2, codigo2, turismo2);
     if (turismo1 > turismo2)
     {
        printf("Resultado: Carta 1 venceu!\n");
     } else if (turismo1 == turismo2)
     {
        printf("Resultado: Empate!\n");
     } else {
       printf("Resultado: Carta 2 venceu!\n");
     };
     break;

     case 5:
     printf("\nDENSIDADE DEMOGRÁFICA\n");
     printf("Carta 1 - %s (%s): %.1f\n", cidade1, codigo1, densidadePopulacional1);
     printf("Carta 2 - %s (%s): %.1f\n", cidade2, codigo2, densidadePopulacional2);
     if (densidadePopulacional1 > densidadePopulacional2)
     {
        printf("População: Carta 1 venceu!\n");
     } else if (densidadePopulacional1 == densidadePopulacional2)
     {
        printf("População: Empate!\n");
     } else {
       printf("Resultado: Carta 2 venceu!\n");
     };
     break;
  }

 
  
  
  

//   printf("PIB: Carta %d venceu\n");
//   printf("Pontos Turísticos: Carta %d venceu\n");
//   printf("Densidade: Carta %d venceu\n");
//   printf("PIB per capita: Carta %d venceu\n");
//   printf("Super Poder: Carta %d venceu\n");
   


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}