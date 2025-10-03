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

  
  // ############################ CADASTRO DA PRIMEIRA CARTA
  // ############################
  printf("\n==== CADASTRO DA PRIMEIRA CARTA ====\n");

  printf("Nome do estado (SEM ESPAÇOS; ex. São-Paulo):\n");
  (void)scanf("%s", primeiroEstado); // recebe um inteiro e armazena na variável b
  printf("Código do estado (ex. RJ);\n");
  (void)scanf("%s", codigo1);
  printf("Nome da cidade (SEM ESPAÇOS; ex. São-Paulo):\n");
  (void)scanf("%s", cidade1);
  printf("População da Cidade:\n");
  (void)scanf("%lu", &populacao1);
  printf("Área em Km² (ex. 123456.78):\n");
  (void)scanf("%f", &area1);
//   printf("Produto Interno Bruto (PIB):\n");
//   (void)scanf("%f", &pib1);
//   printf("N° de Pontos Turísticos:\n");
//   (void)scanf("%d", &turismo1);

//   // cálculo de densidade Pop., PPC e super poder
//   densidadePopulacional1 = (float)(populacao1 / area1);
//   pibpc1 = (float)(pib1 / populacao1);
//   superPoder1 = (float)((float)populacao1 + area1 + pib1 + pibpc1 + (1 / densidadePopulacional1));

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
//   printf("Produto Interno Bruto (PIB):\n");
//   (void)scanf("%f", &pib2)
//   printf("N° de Pontos Turísticos:\n");
//   (void)scanf("%d", &turismo2);

//   // cálculo de densidade e PPC
//   densidadePopulacional2 = (float)(populacao2 / area2);
//   pibpc2 = (float)(pib2 / populacao2);
//   superPoder2 = (float)((float)populacao2 + area2 + pib2 + pibpc2 + (1 / densidadePopulacional2));

  // ############################ IMPRESSÃO DAS CARTAS
  // ############################
//   printf("\n=====INFORMAÇÕES=====\n");

//   // Carta 1
//   printf("\nCARTA 1");
//   printf("\nEstado: %c", primeiroEstado);
//   printf("\nCódigo: %s", codigo1);
//   printf("\nCidade: %s", cidade1);
//   printf("\nPopulação: %lu", populacao1);
//   printf("\nPIB: %.2f", pib1);
//   printf("\nÁrea: %.3f", area1);
//   printf("\nPontos Turísticos: %d", turismo1);
//   printf("\nPIB per Capita: %.2f", pibpc1);
//   printf("\nDensidade Populacional: %.1f", densidadePopulacional1);
//   printf("\nSuper Poder: %f \n", superPoder1);

//   // Carta 2
//   printf("\nCARTA 2");
//   printf("\nEstado: %c", segundoEstado);
//   printf("\nCódigo: %s", codigo2);
//   printf("\nCidade: %s", cidade2);
//   printf("\nPopulação: %lu", populacao2);
//   printf("\nPIB: %.2f", pib2);
//   printf("\nÁrea: %.3f", area2);
//   printf("\nPontos Turísticos: %d", turismo2);
//   printf("\nPIB per Capita: %.2f", pibpc2);
//   printf("\nDensidade Populacional: %.1f", densidadePopulacional2);
//   printf("\nSuper Poder: %.3f \n", superPoder2);


  // printf("\n\n=====CADASTRO CONCLUÍDO!=====\n\n");


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    

  // ############################ IMPRESSÃO DOS RESULTADOS
  // ############################
  printf("\n=====COMPARAÇÃO DAS CARTAS=====\n");

  printf("\nPOPULAÇÃO\n");
  printf("Carta 1 - %s (%s): %lu\n", cidade1, codigo1, populacao1);
  printf("Carta 2 - %s (%s): %lu\n", cidade2, codigo2, populacao2);
  if (populacao1 > populacao2)
  {
     printf("População: Carta 1 venceu!\n");
  } else if (populacao1 == populacao2)
  {
     printf("População: Empate!\n");
  } else {
    printf("Resultado: Carta 2 venceu!\n");
  };
  
  printf("\nÁREA\n");
  printf("Carta 1 - %s (%s): %.3f\n", cidade1, codigo1, area1);
  printf("Carta 2 - %s (%s): %.3f\n", cidade2, codigo2, area2);
  if (area1 > area2)
  {
     printf("Área: Carta 1 venceu!\n");
  } else if (area1 == area2)
  {
     printf("Área: Empate!\n");
  } else {
    printf("Resultado: Carta 2 venceu!\n");
  };

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
