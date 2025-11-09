#ifndef FUNCOES_H
#define FUNCOES_H
#include <string>
using namespace std;

void mostrarArmas();
int calcularvida(int vidajogador,int dano);
int calculardano(string arms);
bool verificarFim(int vida1, int vida2, string nome1, string nome2);
void mostrarVida(string nome, int vida);
bool querContinuar();


#endif

