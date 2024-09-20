#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    char codigo_carta[4], nome_cidade[20], codigo_carta2[4], nome_cidade2[20];
    int populacao, qpontos_turisticos, qpontos_turisticos2, populacao2, opcao;
    float densidade_populacao1, densidade_populacao2;
    float pib, area_cidade, pib2, area_cidade2;

    setlocale(LC_ALL, "Portuguese");

    //cadastrando carta01
    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);

   // printf("\n %s minha cidade\n", nome_cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area_cidade);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qpontos_turisticos);

    //Cadastro segunda cidade
    printf("////////////////////////////\n");
    printf("Cadastre a segunda cidade!\n");
    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area_cidade2);

    printf("Digite o pib da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &qpontos_turisticos2);

    //Exibindo dados cadastrados
    printf("////////////////////\n");
    printf("Carta 01\n");
    printf("////////////////////\n");
    printf("Codigo da carta: %s\n", codigo_carta);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area_cidade);
    //calculando densidade populacional
    densidade_populacao1 = populacao/ area_cidade;
    printf("Densidade populacional: %.2f\n", densidade_populacao1);
    printf("Pib: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", qpontos_turisticos);


    //Exibindo dados cadastrados da segunda cidade
    printf("////////////////////\n");
    printf("Carta 02\n");
    printf("////////////////////\n");
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2fkm²\n", area_cidade2);
    //calculando densidade populacional
    densidade_populacao2 = populacao2 / area_cidade2;
    printf("Densidade populacional: %.2f\n", densidade_populacao2);
    printf("Pib: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", qpontos_turisticos2);

    //Exibindo menu de opções.
    printf("////////////////////\n");
    printf("Menu de poções.\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. Pib.\n");
    printf("4. Número de Pontos.\n");
    printf("5. Densidade populacional.\n");
    printf("Selecione uma das opções.\n");
    printf("////////////////////\n");
    scanf("%d", &opcao);

    //Opções do menu após seleção do usuario 
    switch (opcao)
    {
    case 1:
        //comparando a populaçao das duas cidades.
        if (populacao > populacao2){
            printf("A cidade vencedora é %s. por possuir maior população.", nome_cidade);
            //printf("%s tem mais habitantes que %s.", nome_cidade, nome_cidade2);
        }
        else if (populacao == populacao2)
        {
            printf("Empate por possuirem a mesma quantidade de habitantes.");
        }
        else {
            printf("A cidade vencedora é %s.por possuir maior população.", nome_cidade2);
            //printf("%s tem mais habitantes que %s.", nome_cidade2, nome_cidade);
        }
        break;
        
    case 2:
        // comparando a area das cidades
        if (area_cidade > area_cidade2)
        {
            printf("A cidade vencedora é %s por possuir maior área.", nome_cidade);
        }
        else if (area_cidade == area_cidade2)
        {
            printf("Empate por possuirem o mesmo tamanho de área");
        }
        
        else
        {
            printf("A cidade vencedora é %s por possuir maior área.", nome_cidade2);
        }
        
        break;

    case 3:
        // comparando o pid das cidades.
        if (pib > pib2)
        {
             printf("A cidade vencedora é %s por possuir maior Pib.", nome_cidade);
        }
        else if (pib == pib2)
        {
            printf("Empate por possuirem o mesmo Pib.");
        }
        
        else
        {
            printf("A cidade vencedora é %s por possuir maior Pib.", nome_cidade2);
        }
        
        break;

    case 4:
        // comparando a quantidade de pontos turisticos das cidades
        if (qpontos_turisticos > qpontos_turisticos2)
        {
             printf("A cidade vencedora é %s por possuir mais pontos turísticos.", nome_cidade);
        }
        else if (qpontos_turisticos2 == qpontos_turisticos)
        {
            printf("Empate por possuirem a mesma quantidade de pontos turísticos.");
        }
        
        else
        {
            printf("A cidade vencedora é %s por possuir mais pontos  turísticos.", nome_cidade2);
        }
        break;

    case 5:
        // comparando a quantidade de pontos turisticos das cidades
        if (densidade_populacao1 < densidade_populacao2)
        {
             printf("A cidade vencedora é %s por possuir menor densidade populacional", nome_cidade);
        }
        else if (densidade_populacao1 == densidade_populacao2)
        {
           printf("Empate por possuirem a mesma quantidade de habitantes por km².");
        }
        
        else
        {
            printf("A cidade vencedora é %s por possuir menor densidade populacional", nome_cidade2);
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }


    return 0;
}
