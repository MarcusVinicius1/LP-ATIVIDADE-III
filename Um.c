#include <stdio.h>

int main() {
    // Definindo vetores para armazenar as informações
    char nomes[5][2];
    int idades[5];
    float pesos[5];
    float alturas[5];

    // Lendo as informações das 5 pessoas
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Digite o peso da pessoa %d: ", i + 1);
        scanf("%f", &pesos[i]);

        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &alturas[i]);
        
        setbuf(stdin, 0);
    }

    // Inicializando variáveis para armazenar as maiores e menores alturas, pesos e idades
    float maiorAltura = alturas[0], menorAltura = alturas[0];
    float maiorPeso = pesos[0], menorPeso = pesos[0];
    int maiorIdade = idades[0], menorIdade = idades[0];

    // Encontrando as maiores e menores alturas, pesos e idades
    for (int i = 1; i < 5; i++) {
        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }
        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }

        if (pesos[i] > maiorPeso) {
            maiorPeso = pesos[i];
        }
        if (pesos[i] < menorPeso) {
            menorPeso = pesos[i];
        }

        if (idades[i] > maiorIdade) {
            maiorIdade = idades[i];
        }
        if (idades[i] < menorIdade) {
            menorIdade = idades[i];
        }
    }

    // Exibindo as informações solicitadas
    printf("\nInformacoes das pessoas:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nNome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Peso: %.2f\n", pesos[i]);
        printf("Altura: %.2f\n", alturas[i]);
        printf("-----------------------\n");
    }

    // Exibindo as maiores e menores alturas, pesos e idades
    printf("\nMaior Altura: %.2f\n", maiorAltura);
    printf("Menor Altura: %.2f\n", menorAltura);
    printf("Maior Peso: %.2f\n", maiorPeso);
    printf("Menor Peso: %.2f\n", menorPeso);
    printf("Maior Idade: %d\n", maiorIdade);
    printf("Menor Idade: %d\n", menorIdade);

    return 0;
}
