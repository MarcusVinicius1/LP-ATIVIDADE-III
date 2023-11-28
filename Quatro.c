#include <stdio.h>

int main() {
    int numeros[5];
    int qtdImpares = 0, qtdNegativos = 0;
    int maior, menor, somaPares = 0, qtdPares = 0, somaTotal = 0;

    // Lendo os 5 números inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numeros[i]);

        // Verificando se o número é ímpar
        if (numeros[i] % 2 != 0) {
            qtdImpares++;
        }

        // Verificando se o número é negativo
        if (numeros[i] < 0) {
            qtdNegativos++;
        }

        // Atualizando o maior e o menor número
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
        }

        // Verificando se o número é par para calcular a média
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            qtdPares++;
        }

        // Somando todos os números para calcular a média total
        somaTotal += numeros[i];
    }

    // Calculando as médias
    float mediaPares = (qtdPares > 0) ? (float)somaPares / qtdPares : 0.0;
    float mediaTotal = (float)somaTotal / 5;

    // Exibindo os resultados
    printf("\nQuantidade de numeros impares: %d\n", qtdImpares);
    printf("Quantidade de numeros negativos: %d\n", qtdNegativos);
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media de numeros pares: %.2f\n", mediaPares);
    printf("Media de numeros inseridos: %.2f\n", mediaTotal);

    return 0;
}
