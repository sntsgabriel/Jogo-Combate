#include <iostream>
#include <string>

#include "functions.h"

int main()
{
    std::string personagem1, personagem2;
    std::string arma;
    int vida2 = 200;
    int vida1 = 200;
    int dano;
    int turno = 1;

    std::cout << "Digite o nome do primeiro personagem: ";
    std::getline(std::cin, personagem1);
    std::cout << "Digite o nome do segundo personagem: ";
    std::getline(std::cin, personagem2);

    while (personagem1 == personagem2){
        std::cout << "Personagem com o mesmo nome\nInsira um nome diferente\n";
        std::getline(std::cin, personagem2);
    }

    while(true)
    {
        std::cout << "=== TURNO " << turno << "\n";

        std::cout << "Vez de " << personagem1 << " jogar\n";
        mostrarArmas();
        std::cout << "Digite a arma de combate: ";
        std::cin >> arma;

        dano = calcularDano(arma);

        vida2 = calcularVida(vida2, dano);

        std::cout << "Foi desferido " << dano << " de dano!\n";

        std::cout << "Vida atual de " << personagem2 << ": " << vida2 << "\n";
        mostrarVida(personagem2, vida2);

        if (verificarFim(vida1, vida2, personagem1, personagem2)) break;



        std::cout << "Vez de " << personagem2 << " jogar\n";
        mostrarArmas();
        std::cout << "Digite a arma de combate: ";
        std::cin >> arma;

        int danoInimigo = calcularDano(arma);

        vida1 = calcularVida(vida1, danoInimigo);
        std::cout << "Foi desferido " << danoInimigo << " de dano\n";

        std::cout << "Vida atual de " << personagem1 << ": " << vida1 << "\n";
        mostrarVida(personagem1, vida1);

        if (verificarFim(vida1, vida2, personagem1, personagem2)) break;

        if (!continuarJogo()) {
            std::cout << "\nJogo encerrado...\n";
            break;
        }

        turno++;
    }

    return 0;
}