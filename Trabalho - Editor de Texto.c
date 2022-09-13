#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include "TADEditor.h"


void TelaPrincipal(Descritor *Desc)
{
    char Opcao;
    system("cls");
    printf("F2-Abrir       F3-Salvar       F4-Sair       F5-Exibir\n");
    printf("-------------------------------------------------------------------------------\n\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("COL=,  LIN=   INSERT |||| LISTA"); //adicionar col e lin
    do
    {
        Opcao = getche();
        if (Opcao==0)
        {
            Opcao = getche();
            switch(Opcao)
            {
                case 60:
                        Abrir(&*Desc);
                        break;

                case 61:
                        printf("F3\n");
                        break;

                case 63:
                        printf("F5\n");
                        break;

                case 67:
                        printf("F10\n");
                        break;
            }
        }
        else if (Opcao==224)
        {
            Opcao = getche();
            switch(Opcao)
            {
                case 'A':
                        break;

                case 'B':
                        break;

                case 'C':
                        break;

                case 'D':
                        break;

                case 'E':
                        break;
            }
        }
        else
        {
            switch(Opcao)
            {
                case 'A':
                        break;

                case 'B':
                        break;

                case 'C':
                        break;

                case 'D':
                        break;

                case 'E':
                        break;
            }
        }
    }while(Opcao!=62 );
}

void MenuParametros(int *Linha, int *RecEsq, int *RecDir)
{
    system("cls");
    printf("\t\t** EDITOR DE TEXTO **\n\n");
    printf("### Menu de Configuracao de Parametros ###\n\n");
    printf("Primeira Linha: ");
    scanf("%d", &*Linha);
    printf("Recuo Esquerdo: ");
    scanf("%d", &*RecEsq);
    printf("Recuo Direito: ");
    scanf("%d", &*RecDir);
}

int main(void)
{
    Descritor Descritor;
    //int Linha, RecEsq, RecDir;
    Init(&Descritor);
    TelaPrincipal(&Descritor);
    return 0;
}