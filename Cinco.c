#include <stdio.h>

#define MAX_VENDAS 100

// Estrutura para armazenar informações de cada venda
struct Venda {
    char produto[50];
    float preco;
    int quantidade;
};

int main() {
    // Vetor para armazenar as vendas
    struct Venda vendas[MAX_VENDAS];
    
    int opcao;
    int totalVendas = 0;

    do {
        // Exibindo opções para o usuário
        printf("\n1 - Adicionar Venda\n");
        printf("2 - Sair e Exibir Total de Vendas\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Adicionar venda
                if (totalVendas < MAX_VENDAS) {
                    printf("Digite o nome do produto: ");
                    scanf("%s", vendas[totalVendas].produto);

                    printf("Digite o preco do produto: ");
                    scanf("%f", &vendas[totalVendas].preco);

                    printf("Digite a quantidade vendida: ");
                    scanf("%d", &vendas[totalVendas].quantidade);

                    totalVendas++;
                    printf("Venda registrada com sucesso!\n");
                } else {
                    printf("Limite de vendas atingido. Nao foi possivel adicionar mais vendas.\n");
                }
                break;

            case 2:
                // Sair e exibir total de vendas
                printf("\nTotal de Vendas Realizadas:\n");
                float total = 0.0;
                for (int i = 0; i < totalVendas; i++) {
                    float subtotal = vendas[i].preco * vendas[i].quantidade;
                    printf("%s: R$ %.2f x %d = R$ %.2f\n", vendas[i].produto, vendas[i].preco, vendas[i].quantidade, subtotal);
                    total += subtotal;
                }
                printf("\nTotal Geral de Vendas: R$ %.2f\n", total);
                break;

            default:
                // Opção inválida
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
