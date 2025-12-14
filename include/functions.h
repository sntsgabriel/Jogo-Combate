#ifndef FUNCOES_H
#define FUNCOES_H
#include <string>
using namespace std;

void MostrarArmas();
int CalcularVida(int vidajogador,int dano);
int CalcularDano(string arms);
bool VerificarFim(int vida1, int vida2, string nome1, string nome2);
void MostrarVida(string nome, int vida);
bool ContinuarJogo();


#endif

