#include "files.h"
#include "graph.h"

int main(void)
{
    vector<Professor> professores;
    vector<Escola> escolas;
    Read("input.txt", &professores, &escolas);
    Emparelhamento(&professores, &escolas);
    PrintProfessores(professores);
    PrintEscolas(escolas);
    PrintDisponibilidade(professores, escolas);
    return 0;
}