#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int codcidade;
    char nome [20];
    float pontos;
    float populacao;
    float area;
    double pib;

    printf("Código da Cidade:\n");
    scanf("%d, &codcidade");

    printf("Nome da Cidade:"\n);
    scanf("%s, &nome");

    printf("Pontos Turísticos\n");
    scanf("%d, &pontos");

    printf("População:\n");
    scanf("%f, &populacao");

    printf("Área da Cidade:\n");
    scanf("%f, &area");

    printf("PIB:\n");
    scanf("%e, &pib");


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
