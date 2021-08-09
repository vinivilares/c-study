#include <stdio.h>

int main(void) {
    const int bimestresAnuais = 4;
    const int numeroDeAlunos = 4;

    float notasAlunos[numeroDeAlunos][bimestresAnuais];
    float mediasAlunos[numeroDeAlunos];

    float media = 0;

    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
        printf("Insira as 4 notas do aluno %i\n", aluno + 1);
        for (int notas = 0; notas < bimestresAnuais; ++notas) {
            scanf("%f", &notasAlunos[aluno][notas]);
            media += notasAlunos[aluno][notas];
        }
        printf("\n");
        mediasAlunos[aluno] = media / bimestresAnuais;
        media = 0;
    }

    for (int aluno = 0; aluno < numeroDeAlunos; ++aluno) {
        printf("A media do aluno %i e %.2f\n", aluno + 1, mediasAlunos[aluno]);
    }

    return 0;
}