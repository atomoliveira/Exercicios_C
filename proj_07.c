#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float notas[4];
    int ativo;
} Aluno;

Aluno alunos[MAX_ALUNOS];
void menu();
void cadastrar();
void remover();
void reprovados();
void pesquisar();
void listar();
int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
void menu()
{
    int op;
    do
    {
        system("cls"); //linux

        printf("\n1 - Cadastrar aluno\n2 - Remover aluno");
        printf("\n3 - Alunos reprovados\n4 - Pesquisar aluno\n");
        printf("\n5 - Listar alunos\n0 - Sair\n");
        scanf("%d", &op);
        getchar();
        switch (op)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            remover();
            break;
        case 4:
            pesquisar();
            break;
        case 5:
            listar();
            break;
        }
        getchar();
    } while (op != 0);
}
void cadastrar()
{
    char nome[50];
    float notas[4];
    int op;
    do
    {
        system("cls"); //linux
        printf("\nNome: ");
        fgets(nome, sizeof(nome), stdin);
        printf("\n1 Bimestre:");
        scanf("%f", notas[0]);
        printf("\n2 Bimestre:");
        scanf("%f", notas[1]);
        printf("\n3 Bimestre:");
        scanf("%f", notas[2]);
        printf("\n4 Bimestre:");
        scanf("%f", notas[3]);

            for (int i = 0; i < MAX_ALUNOS; i++)
        {
            if (alunos[i].ativo == 0)
            {
                alunos[i].notas[0] = notas[0];
                alunos[i].notas[1] = notas[1];
                alunos[i].notas[2] = notas[2];
                alunos[i].notas[3] = notas[3];
                strcpy(alunos[i].nome, nome);
                alunos[i].ativo = 1;
                break;
            }
        }

        printf("\n1 - Continuar\n0 - Sair");
        scanf("%d", &op);
    } while (op != 0);
}
void remover()
{
    int matricula;
    listar();
    printf("\n Digite a matricula do aluno a ser removido: ");
    scanf("%d", &matricula);
    --matricula;
    alunos[matricula].ativo = 0;
    printf("\n Aluno foi excluido com sucesso\n");
    getchar();
}
void reprovados()
{
 int matricula;
    listar();
    printf("\n Digite a matricula do aluno a ser removido: ");
    scanf("%d", &matricula);
    --matricula;
    alunos[matricula].ativo = 0;
    printf("\n Aluno foi excluido com sucesso\n");
    getchar();
}
void reprovados()
{
    system("cls"); //linux

    float media;
    printf("\n LISTA DE ALUNOS REPROVADOS\n");
    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        if (alunos[i].ativo == 1)
        {
            media = 0;
            media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
            media = media / 4;
            if (media < 7.0)
            {
                printf("Matricula: %d\n", i + 1);
                printf("Nome: %s\n", alunos[i].nome);
                printf("1 Bim: %0.2f\n", alunos[i].notas[0]);
                printf("2 Bim: %0.2f\n", alunos[i].notas[1]);
                printf("3 Bim: %0.2f\n", alunos[i].notas[2]);
                printf("4 Bim: %0.2f\n", alunos[i].notas[3]);
                printf("-----------\n");
            }
        }
    }
}
void aprovados()
{
    system("clear"); //linux
    //system("cls"); //windows
    float media;
    printf("\n LISTA DE ALUNOS APROVADOS\n");
    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        if (alunos[i].ativo == 1)
        {
            media = 0;
            media = alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3];
            media = media / 4;
            if (media >= 7.0)
            {
                printf("Matricula: %d\n", i + 1);
                printf("Nome: %s\n", alunos[i].nome);
                printf("1 Bim: %0.2f\n", alunos[i].notas[0]);
                printf("2 Bim: %0.2f\n", alunos[i].notas[1]);
                printf("3 Bim: %0.2f\n", alunos[i].notas[2]);
                printf("4 Bim: %0.2f\n", alunos[i].notas[3]);
                printf("-----------\n");
            }
        }
    }
}
void pesquisar()
{

