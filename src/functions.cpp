#include <iostream>
#include "functions.h"

void mostrarArmas() {
    std::cout << "Armas: espada (30), machado (10), bomba (80), adaga(5), magia(50)\n";
}

int calcularVida(int vidajogador, int dano) {
    int novaVida = vidajogador - dano;
    return (novaVida < 0) ? 0 : novaVida; // Retorna 0 se ficar negativo
}

int calcularDano(std::string arma) {
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
        std::cout << "Equipamento Errado! Dano 0\n";
    }
    return dano;
}

bool verificarFim(int vida1, int vida2, std::string nome1, std::string nome2) {
    if (vida1 <= 0 && vida2 <= 0) {
        std::cout << "Empate!\n";
        return true;
    }
    else if (vida2 <= 0) {
        std::cout << nome1 << " venceu!\n";
        return true;
    }
    else if (vida1 <= 0) {
        std::cout << nome2 << " venceu!\n";
        return true;
    }
    return false;
}

void mostrarVida(std::string nome, int vida) {
    std::cout << nome << " [";
    int barras = vida / 10; // cada 10 de vida = 1 barra
    for (int i = 0; i < barras; i++) std::cout << "|";
    for (int i = barras; i < 20; i++) std::cout << " ";
    std::cout << "] " << vida << "\n";
}

bool continuarJogo() {
    std::string resposta;
    std::cout << "\nQuer continuar jogando? (sim/nao): ";
    std::cin >> resposta;
    return (resposta == "sim" || resposta == "Sim" || resposta == "SIM");
}



