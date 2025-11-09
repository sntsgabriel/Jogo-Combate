# Jogo de Batalha em C++

Este projeto implementa um jogo de batalha em turnos utilizando a linguagem **C++**, com foco em modularização e boas práticas de organização de código.  
O jogo foi desenvolvido como exercício de aprendizado em programação estruturada e separação de funções em arquivos distintos.

---

## 📁 Estrutura do projeto

```
jogo-combate/
├── src/        → arquivos .cpp
├── include/    → arquivos .h
├── build/      → saída da compilação
├── Makefile    → para compilar facilmente
└── README.md
```

---

## 🧰 Funcionalidades

- Sistema de combate entre dois personagens.
- Escolha de armas com valores de dano distintos.
- Atualização dinâmica da vida dos jogadores.
- Exibição de vencedor quando um personagem chega a 0 de vida.
- Possibilidade de continuar ou encerrar o jogo a cada turno.

---

## Requisitos

Antes de compilar, é necessário ter instalado:

- Um compilador C++ (ex: `g++`)

---

## Compilação

### **Windows (MinGW ou MSYS2)**
No terminal, estando na pasta do projeto:

Compile com:
```bash
g++ src/main.cpp src/functions.cpp -I include -o jogo-combate
```

E execute:
```bash
./jogo-combate
```

---

### **Linux**
Certifique-se de ter o compilador instalado:

```bash
sudo apt install build-essential
```

Compile com:
```bash
make
```

E execute:
```bash
./build/jogo-combate
```