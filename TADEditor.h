struct caracter
{
    char Letra;
    struct caracter *Prox, *Ant;
};

typedef struct caracter Caracter;

struct linha
{
    int Nro;
    Caracter *InicioL;
    struct linha *Top, *Botton;
};

typedef struct linha Linha;

struct descritor
{
    Linha *Inicio, *Fim;
};

typedef struct descritor Descritor;


void Init(Descritor *D)
{
    (*D).Inicio = NULL;
    (*D).Fim = NULL;
}

void Abrir(Descritor *D)
{
    FILE *Texto;
    char Caminho[100], Linha[80];
    int i;
    printf("Digite o caminho para o arquivo: ");
    gets(Caminho);
    Texto = fopen(Caminho, "r");
    fgets(Linha, 80, Texto);
    while(feof(Texto))
    {
        for (i=0; i<strlen(Linha); i++)
        {
            if (Linha[i]=='\n')     
                InsereLinhaVazia();
            else
                InsereCaracter();
        }
        fgets(Linha, 80, Texto);
    }
}

void InsereCaracter()
{

}

void InsereLinhaVazia()
{
    
}
