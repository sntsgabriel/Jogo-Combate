#include <iostream>
#include <string>

#include "functions.h"
// using namespace std;

int main()
{
    std::string continuar;
    std::string personagem1, personagem2;
    std::string arms;
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
        std::cin >> arms;

        dano = calculardano(arms);

        vida2 = calcularvida(vida2, dano);

        std::cout << "Foi desferido " << dano << " de dano!\n";

        std::cout << "Vida atual de " << personagem2 << ": " << vida2 << "\n";
        mostrarVida(personagem2, vida2);

        if (verificarFim(vida1, vida2, personagem1, personagem2)) break;



        std::cout << "Vez de " << personagem2 << " jogar\n";
        mostrarArmas();
        std::cout << "Digite a arma de combate: ";
        std::cin >> arms;

        int danoinimigo = calculardano(arms);

        vida1 = calcularvida(vida1, danoinimigo);
        std::cout << "Foi desferido " << danoinimigo << " de dano\n";

        std::cout << "Vida atual de " << personagem1 << ": " << vida1 << "\n";
        mostrarVida(personagem1, vida1);

        if (verificarFim(vida1, vida2, personagem1, personagem2)) break;

        if (!querContinuar()) {
            std::cout << "\nJogo encerrado...\n";
            break;
        }

        turno++;
    }

    return 0;
}