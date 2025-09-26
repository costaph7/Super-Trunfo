#include <stdio.h>

int main (){

    //variaveis

    char estado;
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float PIB;
    int pontosturista;

    //Coleta de dados do usuário para 1° carta!

    printf("-------> Vamos registra sua carta! <-------\n");
    printf("Digite uma letra para o estado de (A) a (H): ");
    scanf("%s", &estado);

    printf("Digite o código da carta (Ex: Letra do código + 01, 02, 03...): ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ", cidade);
    scanf("%s", &cidade);

    printf("Insira número de habitantes da cidade: ", populacao);
    scanf(" %d", &populacao);

    printf("Insira a área da cidade: ", area);
    scanf(" %f", &area);

    printf("Insira o PIB da cidade: ", PIB);
    scanf(" %f", &PIB);

    printf("Digite quantos pontos turísticos tem a cidade: ", pontosturista);
    scanf(" %d", &pontosturista);

    //Exibir informações da 1° carta!

    printf("Informações da 1° Carta: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f Reais\n", PIB);
    printf("Números de pontos turístios: %d\n", pontosturista);

    //Coleta de dados do usuário para 2° carta!
    
    printf("-------> Vamos registra sua carta! <-------\n");
    printf("Digite uma letra para o estado de (A) a (H): ");
    scanf("%s", &estado);

    printf("Digite o código da carta (Ex: Letra do código + 01, 02, 03...): ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ", cidade);
    scanf("%s", &cidade);

    printf("Insira número de habitantes da cidade: ", populacao);
    scanf("%d", &populacao);

    printf("Insira a área da cidade: ", area);
    scanf("%f", &area);

    printf("Insira o PIB da cidade: ", PIB);
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos tem a cidade: ", pontosturista);
    scanf("%d", &pontosturista);

    //Exibir informações da 2° carta!

    printf("Informações da 1° Carta: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f Reais\n", PIB);
    printf("Números de pontos turístios: %d\n", pontosturista);
}