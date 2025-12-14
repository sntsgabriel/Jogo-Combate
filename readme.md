# Jogo de Batalha em C++

Projeto desenvolvido em **C++** que implementa um jogo de batalha em turnos executado no console. O foco principal é a **organização do código**, **modularização**, e o uso de **ferramentas profissionais de build**, como o **CMake**, seguindo práticas comuns em ambientes corporativos.

---

## 🚀 Tecnologias Utilizadas

- **C++17**
- **CMake**
- **Visual Studio 2026 (MSVC)**
- **Ninja (via CMake)**
- **VS Code / Visual Studio**

---

## 📁 Estrutura do Projeto

```text
jogo-combate/
│
├── CMakeLists.txt
├── src/        → arquivos fonte (.cpp)
├── include/    → arquivos de cabeçalho (.h)
├── build/      → arquivos gerados pelo CMake (não versionado)
├── Makefile    → método de build alternativo (legado)
└── README.md
```

---

## 🧰 Funcionalidades

- Combate em turnos entre dois personagens.
- Seleção de armas com valores de dano distintos.
- Atualização dinâmica da vida dos jogadores.
- Barra de vida exibida no console.
- Verificação de vitória, derrota ou empate.
- Opção de continuar ou encerrar o jogo a cada turno.

---

## ⚙️ Build do Projeto (CMake)

Este projeto utiliza **CMake** como sistema de build, permitindo uma compilação organizada, portátil e compatível com IDEs profissionais.

### 🔹 Pré-requisitos

- CMake ≥ 3.16
- Compilador C++ (MSVC, GCC ou Clang)
- Visual Studio 2026 (Windows)

---

### 🔹 Gerar o build

Na raiz do projeto:

```bash
mkdir build
cd build
cmake ..
```

---

### 🔹 Compilar

```bash
cmake --build .
```

---

### 🔹 Executar (Windows)

```bash
.\Debug\JogoCombate.exe
```

Ou execute diretamente pelo **Visual Studio** (`F5` ou `Ctrl + F5`).

---

## 🖥️ Abrindo no Visual Studio

1. Abrir o **Visual Studio 2026**
2. Selecionar **File → Open → Folder**
3. Escolher a pasta raiz do projeto (onde está o `CMakeLists.txt`)
4. O Visual Studio detecta e configura o CMake automaticamente

---

## 🛠️ Build Alternativo (Make — Linux e macOS)

Além do CMake, o projeto disponibiliza um **Makefile simples**
para compilação rápida em ambientes **Linux** e **macOS**.

> Este método é indicado apenas para uso local e aprendizado.
> O **CMake é o método principal e recomendado**.

### 🔹 Requisitos

- Compilador C++ (`g++` ou `clang++`)
- `make`

### 🔹 Compilar

Na raiz do projeto:

```bash
make
```

E execute:
```bash
./build/jogo-combate
```



## 📌 Status do Projeto

✔ Estrutura modular
✔ Separação entre `.h` e `.cpp`
✔ Compatível com Visual Studio e VS Code

---

## 👤 Autor

Gabriel Santos

