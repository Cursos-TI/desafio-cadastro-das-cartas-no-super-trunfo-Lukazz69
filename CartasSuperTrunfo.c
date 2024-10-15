#include <stdio.h>

int main() {
    // Aqui eu defini quais são minhas variáveis.
    char nome[50];
    char codigo_cidade[3];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //Aqui eu defino minha coleta de dados sobre o jogo de cartas.
    
    printf("Digite o nome da cidade\n");
    fgets(nome, sizeof(nome), stdin);

    // Limpa o buffer do 'stdin' para evitar problemas com a leitura seguinte
    // Remove o '\n' que fica no buffer após fgets
    nome[strcspn(nome, "\n")] = 0;
    
    printf("Digite o código da cidade\n");
    scanf("%s", &codigo_cidade);

    printf("Digite a população dessa cidade\n");
    scanf("%f", &populacao);

    printf("Digite a área dessa cidade.\n");
    scanf("%f", &area);

    // Aqui limpa o buffer após o scanf
    while(getchar() != '\n');

    printf("Digite o PIB dessa cidade.\n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos essa cidade tem.\n");
    scanf("%d", &pontos_turisticos);

    // Aqui eu vou mostrar os dados digitados.

    printf("Nome da cidade: %s\n", nome);
    printf("Código: %s\n", codigo_cidade);
    printf("População: %.2f habitantes\n", populacao);
    printf("Área: %.2f km\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;



}
