#include <stdio.h>
#include <stdlib.h>

#define MAX_CONTATOS 100

// Estrutura para armazenar informações do contato
struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    // Vetor para armazenar os contatos
    struct Contato agenda[MAX_CONTATOS];

    int opcao;
    int totalContatos = 0;

    do {
        // Exibindo opções para o usuário
        printf("\n1 - Adicionar Contato\n");
        printf("2 - Mostrar Contatos\n");
        printf("3 - Encerrar\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Adicionar contato
                if (totalContatos < MAX_CONTATOS) {
                    printf("Digite o nome do contato: ");
                    scanf("%s", agenda[totalContatos].nome);

                    printf("Digite o numero de telefone: ");
                    scanf("%s", agenda[totalContatos].telefone);

                    totalContatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("Agenda cheia. Nao foi possivel adicionar mais contatos.\n");
                }
                break;

            case 2:
                // Mostrar contatos
                printf("\nContatos Cadastrados:\n");
                for (int i = 0; i < totalContatos; i++) {
                    printf("%s: %s\n", agenda[i].nome, agenda[i].telefone);
                }
                break;

            case 3:
                // Encerrar o programa
                printf("Encerrando o programa.\n");
                break;

            default:
                // Opção inválida
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
