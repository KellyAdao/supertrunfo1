# 🃏 Super Trunfo em C — Versão Países

Projeto simples em linguagem **C** que permite o **cadastro e exibição de duas cartas do Super Trunfo** com foco em **cidades brasileiras**.  
Cada carta contém dados relevantes como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos.

---

## ✨ Funcionalidades

✅ Cadastro de **duas cartas** com os seguintes dados:

- 🏙️ Estado  
- 🆔 Código da carta  
- 📍 Nome da cidade  
- 👥 População  
- 🌐 Área (em km²)  
- 💰 PIB (em bilhões)  
- 🏛️ Número de pontos turísticos  

📄 Após o cadastro, as informações são exibidas de forma **organizada e legível** no terminal.

---

## 🧑‍💻 Como rodar o projeto

### 🔧 Pré-requisitos

- Ter um **compilador C** instalado, como:
  - [GCC](https://gcc.gnu.org/)
  - [MinGW](http://www.mingw.org/)

---

### 🚀 Passo a passo

1. Clone o repositório:

```bash
git clone https://github.com/KellyAdao/supertrunfo1.git
```

2. Acesse a pasta do projeto:

```bash
cd supertrunfo1
```

3. Compile o código:

```bash
gcc super_trunfo.c -o super_trunfo.exe
```

4. Execute o programa:

```bash
./super_trunfo.exe
```

📝 O programa pedirá que você **insira os dados das duas cartas** e, ao final, mostrará todas as informações cadastradas de forma formatada.

---

## 🧠 Estrutura do Código

O programa está contido em uma **única função `main`**, com a seguinte lógica:

- 📥 Entrada de dados:
  - `fgets()` para **leitura de strings** (nomes, estado, etc.)
  - `scanf()` para **leitura de números** (inteiros e floats)

- 📤 Saída:
  - `printf()` para **exibição organizada** no terminal

---

## ⚠️ Observações

- O projeto **não implementa lógica de comparação** entre cartas, sendo voltado apenas para **cadastro e visualização**.
- A entrada é feita via **teclado**, com mensagens claras para guiar o usuário.

---

## 📁 Estrutura do Repositório

```
supertrunfo1/
├── super_trunfo.c   // Código-fonte principal
└── README.md        // Este arquivo
```
---



