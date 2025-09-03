#include <stdio.h>
#include <string.h>

// Camila Lins, curso de ADS, Estácio, 2025.2.

// Definição da struct Territorio
// Armazena o nome do território, a cor do exército e a quantidade de tropas
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração de um vetor de 5 estruturas Territorio
    Territorio territorios[5];

    // Introdução ao jogo
    printf("\n✧✦☆★ Bem vindo ao jogo de WAR em C! ★☆✦✧\nPreencha os dados a seguir para criar os territórios.\n\n");

    // Laço para cadastrar os 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("★ Cadastro do Território %d ★\n", i + 1);

        // Leitura do nome
        printf("Digite o nome do território: ");
        scanf(" %[^\n]", territorios[i].nome);

        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %s", territorios[i].cor);

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\n~ ✧ ~\n\n");
    printf("★ Dados dos territórios cadastrados ★\n");
    for (int i = 0; i < 5; i++) {
        printf("✦ Território %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("\n~ ✧ ~\n\n");
    }

    return 0;
}
