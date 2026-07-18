#include <algorithm>
#include <cctype>
#include <iostream>

#include "functions.h"

void mostrarArmas() {
    std::cout << "\nArmas disponiveis:\n"
              << "  1. Espada  (30 de dano)\n"
              << "  2. Machado (10 de dano)\n"
              << "  3. Bomba   (80 de dano)\n"
              << "  4. Adaga   (5 de dano)\n"
              << "  5. Magia   (50 de dano)\n";
}

int calcularVida(int vidaJogador, int dano) {
    return std::max(0, vidaJogador - dano);
}

int calcularDano(const std::string& armaEscolhida) {
    std::string arma = armaEscolhida;
    std::transform(arma.begin(), arma.end(), arma.begin(), [](unsigned char caractere) {
        return static_cast<char>(std::tolower(caractere));
    });

    if (arma == "espada" || arma == "1") return 30;
    if (arma == "machado" || arma == "2") return 10;
    if (arma == "bomba" || arma == "3") return 80;
    if (arma == "adaga" || arma == "4") return 5;
    if (arma == "magia" || arma == "5") return 50;
    return -1;
}

bool verificarFim(const Personagem& jogador1, const Personagem& jogador2) {
    if (jogador1.vida <= 0 && jogador2.vida <= 0) {
        std::cout << "Empate!\n";
        return true;
    }
    if (jogador2.vida <= 0) {
        std::cout << jogador1.nome << " venceu!\n";
        return true;
    }
    if (jogador1.vida <= 0) {
        std::cout << jogador2.nome << " venceu!\n";
        return true;
    }
    return false;
}

void mostrarVida(const Personagem& personagem) {
    std::cout << personagem.nome << " [";
    const int barras = personagem.vida / 10;
    for (int i = 0; i < barras; ++i) std::cout << "|";
    for (int i = barras; i < 20; ++i) std::cout << " ";
    std::cout << "] " << personagem.vida << "\n";
}

bool continuarJogo() {
    std::string resposta;
    std::cout << "\nQuer continuar jogando? (sim/nao): ";
    std::getline(std::cin, resposta);
    std::transform(resposta.begin(), resposta.end(), resposta.begin(), [](unsigned char caractere) {
        return static_cast<char>(std::tolower(caractere));
    });
    return resposta == "sim" || resposta == "s";
}
