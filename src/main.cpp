#include <iostream>
#include <string>

#include "functions.h"

namespace {
std::string lerNome(const std::string& mensagem) {
    std::string nome;
    do {
        std::cout << mensagem;
        std::getline(std::cin, nome);
        if (nome.empty()) std::cout << "O nome nao pode ficar vazio.\n";
    } while (nome.empty());
    return nome;
}

int escolherDano(const Personagem& atacante) {
    std::string arma;
    int dano = -1;

    std::cout << "Vez de " << atacante.nome << " jogar.\n";
    mostrarArmas();
    while (dano < 0) {
        std::cout << "Escolha uma arma (nome ou numero): ";
        std::getline(std::cin, arma);
        dano = calcularDano(arma);
        if (dano < 0) std::cout << "Arma invalida. Escolha uma das opcoes exibidas.\n";
    }
    return dano;
}
} // namespace

int main() {
    Personagem personagem1{lerNome("Digite o nome do primeiro personagem: ")};
    Personagem personagem2{lerNome("Digite o nome do segundo personagem: ")};
    int turno = 1;

    while (personagem1.nome == personagem2.nome) {
        std::cout << "Personagens precisam ter nomes diferentes.\n";
        personagem2.nome = lerNome("Digite o nome do segundo personagem: ");
    }

    while (true) {
        std::cout << "\n=== TURNO " << turno << " ===\n";

        const int dano = escolherDano(personagem1);
        personagem2.vida = calcularVida(personagem2.vida, dano);
        std::cout << "Foi desferido " << dano << " de dano!\n";
        mostrarVida(personagem2);
        if (verificarFim(personagem1, personagem2)) break;

        const int danoInimigo = escolherDano(personagem2);
        personagem1.vida = calcularVida(personagem1.vida, danoInimigo);
        std::cout << "Foi desferido " << danoInimigo << " de dano!\n";
        mostrarVida(personagem1);
        if (verificarFim(personagem1, personagem2)) break;

        if (!continuarJogo()) {
            std::cout << "\nJogo encerrado...\n";
            break;
        }
        ++turno;
    }

    return 0;
}
