#ifndef FUNCOES_H
#define FUNCOES_H
#include <string>

void mostrarArmas();
int calcularVida(int vidaJogador,int dano);
int calcularDano(std::string arma);
bool verificarFim(int vida1, int vida2, std::string nome1, std::string nome2);
void mostrarVida(std::string nome, int vida);
bool continuarJogo();


#endif

