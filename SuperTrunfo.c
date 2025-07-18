#include <stdio.h>

int main() {
    //// Variaveis ////
    char nomeestado1[50], nomeestado2[50];  
    char codigoestado1[50], codigoestado2[50];
    char nomecidade1[50] , nomecidade2[50];
    float populacao1 , populacao2 ;
    float densidadepop1 , densidadepop2;
    float area1 , area2, pibpercapita1 , pibpercapita2;
    float pib1,pib2;
    int pontostur1 , pontostur2 , codigocidade1, codigocidade2 ;
    float superpoder1 , superpoder2;

    /// DADOS DA CARTA 01 ///
    printf("Sigla do Estado : \n");
        scanf("%s", nomeestado1);

    printf("Codigo da Cidade : \n");
        scanf("%d", &codigocidade1);

    printf("Nome da Cidade : \n");
        scanf("%s", nomecidade1);

    printf("Populaçao cidade : \n");
        scanf("%f", &populacao1);

    printf("Área total : \n");
        scanf ("%f", &area1);

    printf("PIB da cidade : \n");
        scanf("%f", &pib1);

    printf("Quantidade de Pontos Turisticos : \n");
        scanf("%d", &pontostur1);

    superpoder1 = (populacao1 + area1 + pib1 + (float)pontostur1 - (populacao1/area1) );

    densidadepop1 = populacao1/area1;
    pibpercapita1 = pib1/populacao1;

    printf(" *** CARTA 01 *** : \n");
    printf(" - Estado : %s\n - Codigo : %d\n - Cidade : %s\n - População : %.2f\n - Área em metros : %.2f\n - PIB : %.2f\n - Pontos Turísticos : %d\n - Densidade populacional : %.2f\n - PIB percapita : %.2f\n", nomeestado1,
        codigocidade1 , nomecidade1 ,  populacao1 , area1 , pib1, pontostur1 , densidadepop1 , pibpercapita1 );
    printf("Superpoder carta 1 : %.2f\n" , superpoder1);

    /// DADOS DA CARTA 02 ///
    printf("Sigla do Estado : \n");
        scanf("%s", nomeestado2);

    printf("Codigo da Cidade : \n");
        scanf("%d", &codigocidade2);

    printf("Nome da Cidade : \n");
        scanf("%s", nomecidade2);

    printf("Populaçao cidade : \n");
        scanf("%f", &populacao2);

    printf("Área total : \n");
        scanf ("%f", &area2);

    printf("PIB da cidade : \n");
        scanf("%f", &pib2);

    printf("Quantidade de Pontos Turisticos : \n");
        scanf("%d", &pontostur2);

    superpoder2 = (populacao2 + area2 + pib2 + (float)pontostur2 - (populacao2/area2) );

    densidadepop2 = populacao2/area2;
    pibpercapita2 = pib2/populacao2;

    printf(" *** CARTA 02 *** : \n");
    printf(" - Estado : %s\n - Codigo : %d\n - Cidade : %s\n - População : %.2f\n - Área em metros : %.2f\n - PIB : %.2f\n - Pontos Turísticos : %d\n - Densidade populacional : %.2f\n - PIB percapita : %.2f\n", nomeestado2,
        codigocidade2 , nomecidade2 ,  populacao2 , area2 , pib2, pontostur2 , densidadepop2 , pibpercapita2 );
    printf("Superpoder carta 2 : %.2f\n" , superpoder2);

    /// COMPARAÇÃO DAS CARTAS ///
    int atributo1, atributo2;
    float valor1_c1, valor2_c1, valor1_c2, valor2_c2;
    float soma1, soma2;

    printf("\n Você deve escolher 2 atributos diferentes da sua carta para a batalha.\n");
    printf(" - Atributos disponíveis:\n");
    printf("1. População\n2. Área cidade\n3. PIB cidade\n4. Pontos turísticos\n5. Densidade demográfica\n");

    printf("Escolha o primeiro atributo (1 a 5): ");
        scanf("%d", &atributo1);

    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    switch (atributo1) {
        case 1: printf("2. Área cidade\n3. PIB cidade\n4. Pontos turísticos\n5. Densidade demográfica\n"); break;
        case 2: printf("1. População\n3. PIB cidade\n4. Pontos turísticos\n5. Densidade demográfica\n"); break;
        case 3: printf("1. População\n2. Área cidade\n4. Pontos turísticos\n5. Densidade demográfica\n"); break;
        case 4: printf("1. População\n2. Área cidade\n3. PIB cidade\n5. Densidade demográfica\n"); break;
        case 5: printf("1. População\n2. Área cidade\n3. PIB cidade\n4. Pontos turísticos\n"); break;
        default: printf("Opção inválida.\n"); 
    }

    printf("Digite o segundo atributo (1 a 5): ");
        scanf("%d", &atributo2);

    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("Erro: Atributos inválidos ou repetidos.\n");
        return 1;
    }

    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontostur1; valor1_c2 = pontostur2; break;
        case 5: valor1_c1 = densidadepop1; valor1_c2 = densidadepop2; break;
    }

    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontostur1; valor2_c2 = pontostur2; break;
        case 5: valor2_c1 = densidadepop1; valor2_c2 = densidadepop2; break;
    }

    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;


    printf("\n--- RESULTADO ---\n");
    printf("Carta 1: %s\n", nomecidade1);
    printf("Carta 2: %s\n", nomecidade2);
    printf("Atributos escolhidos: %d e %d\n", atributo1, atributo2);
    printf("Valores Carta 1: %.2f e %.2f\n", valor1_c1, valor2_c1);
    printf("Valores Carta 2: %.2f e %.2f\n", valor1_c2, valor2_c2);
    printf("Soma Carta 1: %.2f\n", soma1);
    printf("Soma Carta 2: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("Carta vencedora: %s\n", nomecidade1);
    else if (soma2 > soma1)
        printf("Carta vencedora: %s\n", nomecidade2);
    else
        printf("Empate!\n");

    return 0;
}
