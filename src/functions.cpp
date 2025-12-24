#include <iostream>
#include "functions.h"

using namespace std;

void MostrarArmas() {
    cout << "Armas: espada (30), machado (10), bomba (80), adaga(5), magia(50)\n";
}

int CalcularVida(int vidajogador,int dano) {
    int novaVida = vidajogador - dano;
    return (novaVida < 0) ? 0 : novaVida; // Retorna 0 se ficar negativo
}

int CalcularDano(string arma) {
    int dano = 0;
    if(arma == "espada" || arma == "1") {
        dano = 30;
    } else if(arma == "machado" || arma == "2") {
        dano = 10;
    } else if(arma == "bomba" || arma == "3") {
        dano = 80;
    } else if(arma == "adaga" || arma == "4") {
        dano = 5;
    } else if(arma == "magia" || arma == "5") {
        dano = 50;
    } else {
        cout << "Equipamento Errado! Dano 0\n";
    }
    return dano;
}

bool VerificarFim(int vida1, int vida2, string nome1, string nome2) {
    if (vida1 <= 0 && vida2 <= 0) {
        cout << "Empate!\n";
        return true;
    }
    else if (vida2 <= 0) {
        cout << nome1 << " venceu!\n";
        return true;
    }
    else if (vida1 <= 0) {
        cout << nome2 << " venceu!\n";
        return true;
    }
    return false;
}

void MostrarVida(string nome, int vida) {
    cout << nome << " [";
    int barras = vida / 10; // cada 10 de vida = 1 barra
    for (int i = 0; i < barras; i++) cout << "|";
    for (int i = barras; i < 20; i++) cout << " ";
    cout << "] " << vida << "\n";
}

bool ContinuarJogo() {
    string resposta;
    cout << "\nQuer continuar jogando? (sim/nao): ";
    cin >> resposta;
    return (resposta == "sim" || resposta == "Sim" || resposta == "SIM");
}



