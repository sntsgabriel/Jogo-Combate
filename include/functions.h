#ifndef FUNCOES_H
#define FUNCOES_H

#include <string>

struct Personagem {
    std::string nome;
    int vida = 200;
};

void mostrarArmas();
int calcularVida(int vidaJogador, int dano);
int calcularDano(const std::string& arma);
bool verificarFim(const Personagem& jogador1, const Personagem& jogador2);
void mostrarVida(const Personagem& personagem);
bool continuarJogo();

#endif
