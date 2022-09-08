#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include "TADEditor.h"


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
    Linha *Texto=NULL;
    int Linha, RecEsq, RecDir;
    MenuParametros(&Linha, &RecEsq, &RecDir);
    return 0;
}