#include <iostream>
#include <string>

#include "functions.h"

int main()
{
    std::string continuar;
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
        MostrarArmas();
        std::cout << "Digite a arma de combate: ";
        std::cin >> arma;

        dano = CalcularDano(arma);

        vida2 = CalcularVida(vida2, dano);

        std::cout << "Foi desferido " << dano << " de dano!\n";

        std::cout << "Vida atual de " << personagem2 << ": " << vida2 << "\n";
        MostrarVida(personagem2, vida2);

        if (VerificarFim(vida1, vida2, personagem1, personagem2)) break;



        std::cout << "Vez de " << personagem2 << " jogar\n";
        MostrarArmas();
        std::cout << "Digite a arma de combate: ";
        std::cin >> arma;

        int danoinimigo = CalcularDano(arma);

        vida1 = CalcularVida(vida1, danoinimigo);
        std::cout << "Foi desferido " << danoinimigo << " de dano\n";

        std::cout << "Vida atual de " << personagem1 << ": " << vida1 << "\n";
        MostrarVida(personagem1, vida1);

        if (VerificarFim(vida1, vida2, personagem1, personagem2)) break;

        if (!ContinuarJogo()) {
            std::cout << "\nJogo encerrado...\n";
            break;
        }

        turno++;
    }

    return 0;
}