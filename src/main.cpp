#include <iostream>

#include "functions.h"
using namespace std;

int main()
{
    string continuar;
    string personagem1, personagem2;
    string arms;
    int vida2 = 200;
    int vida1 = 200;
    int dano;
    int turno = 1;

    cout << "Digite o nome do primeiro personagem: ";
    getline(cin, personagem1);
    cout << "Digite o nome do segundo personagem: ";
    getline(cin, personagem2);

    while (personagem1 == personagem2){
        cout << "Personagem com o mesmo nome\nInsira um nome diferente\n";
        getline(cin, personagem2);
    }

    while(true)
    {
        cout << "=== TURNO " << turno << "\n";

        cout << "Vez de " << personagem1 << " jogar\n";
        mostrarArmas();
        cout << "Digite a arma de combate: ";
        cin >> arms;

        dano = calculardano(arms);

        vida2 = calcularvida(vida2, dano);

        cout << "Foi desferido " << dano << " de dano!\n";

        cout << "Vida atual de " << personagem2 << ": " << vida2 << "\n";
        mostrarVida(personagem2, vida2);

        if (verificarFim(vida1, vida2, personagem1, personagem2)) break;



        cout << "Vez de " << personagem2 << " jogar\n";
        mostrarArmas();
        cout << "Digite a arma de combate: ";
        cin >> arms;

        int danoinimigo = calculardano(arms);

        vida1 = calcularvida(vida1, danoinimigo);
        cout << "Foi desferido " << danoinimigo << " de dano\n";

        cout << "Vida atual de " << personagem1 << ": " << vida1 << "\n";
        mostrarVida(personagem1, vida1);

        if (verificarFim(vida1, vida2, personagem1, personagem2)) break;

        if (!querContinuar()) {
            cout << "\nJogo encerrado...\n";
            break;
        }

        turno++;
    }

    return 0;
}