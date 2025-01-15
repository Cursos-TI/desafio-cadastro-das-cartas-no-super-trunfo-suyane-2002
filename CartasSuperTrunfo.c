#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char Codcarta;
    int codcidade;
    char nome [70];
    float pontos;
    float populacao;
    float area;
    double pib;

    printf("Países\n");

    printf("Código da Carta:\n");
    scanf("%s, &Codcarta, &codcidade");

    printf("Nome da Cidade:\n");
    scanf("%s, &nome");

    printf("Pontos Turísticos\n");
    scanf("%d,&pontos");

    printf("População:\n");
    scanf("%f, &populacao");

    printf("Área da Cidade:\n");
    scanf("%f, &area");

    printf("PIB:\n");
    scanf("%e, &pib");

    printf("Código Carta: %s",Codcarta,codcidade);
    printf("Nome da Cidade: %s", nome);
    printf("Pontos Turísticos %d", pontos);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
