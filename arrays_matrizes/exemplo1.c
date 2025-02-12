#include <stdio.h>

int main() {

    int i;

    char * nomesAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 100"}
    };

    printf("Digite o numero do aluno que queira ver as notas: \n");
    printf("Para o aluno 0, digite 0\n");
    printf("Para o aluno 1, digite 1\n");
    printf("Para o aluno 2, digite 2\n");

    scanf("%d", &i);

    printf("A notas do %s sao: %s, %s...\n", 
    nomesAlunos[i][0], 
    nomesAlunos[i][1], 
    nomesAlunos[i][2]);

    return 0;
}