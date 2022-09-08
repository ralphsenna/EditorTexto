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



