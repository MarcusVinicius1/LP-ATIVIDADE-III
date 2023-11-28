#include <stdio.h>

int main() {
    // Definindo vetores para armazenar os dados dos alunos
    char nomes[5][50];
    int idades[5];
    float notas[5][3];
    float medias[5];

    // Lendo os dados dos 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Digite as 3 notas do aluno %d separadas por espacos: ", i + 1);
        scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);

        // Calculando a média do aluno
        medias[i] = (notas[i][0] + notas[i][1] + notas[i][2]) / 3.0;
        
        setbuf(stdin, 0);
    }

    // Exibindo os dados dos alunos e suas situações
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nNome: %s\n", nomes[i]);
        printf("Idade: %d\n", idades[i]);
        printf("Notas: %.2f %.2f %.2f\n", notas[i][0], notas[i][1], notas[i][2]);
        printf("Media: %.2f\n", medias[i]);

        // Verificando a situação do aluno
        if (medias[i] >= 7.0) {
            printf("Situacao: Aprovado\n");
        } else if (medias[i] >= 5.0) {
            printf("Situacao: Recuperacao\n");
        } else {
            printf("Situacao: Reprovado\n");
        }

        printf("-----------------------\n");
    }

    return 0;
}
