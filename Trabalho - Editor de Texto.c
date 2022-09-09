#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include "TADEditor.h"


void TelaPrincipal(void)
{
    printf("F2-Abrir       F3-Salvar       F4-Sair       F5-Exibir\n");
    printf("-------------------------------------------------------------------------------\n\n\n\n\n\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("COL=,  LIN=   INSERT |||| LISTA");
}

void MenuParametros(int Linha, int RecEsq, int RecDir)
{
    system("cls");
    printf("\t\t** EDITOR DE TEXTO **\n\n");
	printf("### Menu de Configuracao de Parametros ###\n\n");
	printf("Primeira Linha: ");
    scanf("%d", &Linha);
	printf("Recuo Esquerdo: ");
    scanf("%d", &RecEsq);
    printf("Recuo Direito: ");
    scanf("%d", &RecDir);
}

int main(void)
{
    Linha *Texto;
    int Linha, RecEsq, RecDir;
    Init(&Texto);
    MenuParametros(&Linha, &RecEsq, &RecDir);
    TelaPrincipal();
    return 0;
}