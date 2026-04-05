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

> ⚠️ Antes de rodar o build, verifique se você está dentro de um diretório de build válido. Erros como “not build directory” acontecem quando a pasta não existe ou não foi inicializada pelo CMake.

```bash
# crie e entre na pasta (só é necessário uma vez)
mkdir -p build
cd build

# configure o projeto
ecmake ..    # ou cmake ..

# agora compile
cmake --build .
```

> O CMake gera binários em subpastas como `Debug/` ou `Release/` dependendo da configuração. Se você não vir o executável no explorador do Visual Studio, confira a pasta `build/Debug` ou `build/Release` no sistema de arquivos – o IDE às vezes não lista todos os arquivos.

---

### 🔹 Executar

- **Windows**

  ```bash
  ./Debug/JogoCombate.exe
  ```

  No Visual Studio basta pressionar `F5` ou `Ctrl+F5` após abrir a pasta.

- **Linux / macOS**

  ```bash
  ./JogoCombate
  ```

  Se necessário, ajuste permissões com `chmod +x JogoCombate`.

> Para mudar a configuração de compilação (Debug/Release) use o menu do CMake no Visual Studio, VS Code ou a variável `CMAKE_BUILD_TYPE` ao invocar `cmake`:

```bash
cmake -DCMAKE_BUILD_TYPE=Release ..
```
---

## 🖥️ Abrindo no Visual Studio

1. Abrir o **Visual Studio 2026**
2. Selecionar **File → Open → Folder**
3. Escolher a pasta raiz do projeto (onde está o `CMakeLists.txt`)
4. O Visual Studio detecta e configura o CMake automaticamente

---


## 📌 Status do Projeto

✔ Estrutura modular
✔ Separação entre `.h` e `.cpp`
✔ Compatível com Visual Studio e VS Code

---

## 👤 Autor

Gabriel Santos

