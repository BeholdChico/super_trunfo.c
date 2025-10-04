# super_trunfo.c
# 🃏 Super Trunfo - Comparador de Cidades (Nível Intermediário)

Este projeto é uma continuação do desafio anterior de programação em C.  
O objetivo é comparar duas cartas de cidades usando **menu interativo** e **estruturas de decisão (`switch`, `if`, `else`)**.

---

## ⚙️ Funcionalidades

- Cadastro de duas cartas com os seguintes atributos:
  - Estado (sigla)
  - Código da carta
  - Nome da cidade
  - População
  - Área (km²)
  - PIB (em bilhões de reais)
  - Número de pontos turísticos
- Cálculo automático de:
  - Densidade demográfica = População / Área
  - PIB per capita = (PIB × 1.000.000.000) / População
- Menu interativo para o jogador escolher o atributo de comparação.
- Determinação da carta vencedora com base no atributo selecionado.

---

## 🧭 Menu de Comparação

--- MENU DE COMPARAÇÃO ---
1 - População
2 - Área
3 - PIB
4 - Número de pontos turísticos
5 - Densidade demográfica


O jogador escolhe um número (1 a 5), e o programa exibe:

- Nome das duas cidades
- Valores do atributo escolhido
- Resultado da comparação (quem venceu ou se empatou)

> 💡 Observação: para **Densidade Demográfica**, vence o menor valor.

---

## 💻 Como Compilar e Executar

### 1️⃣ Compilar
No terminal, execute:
```bash
gcc super_trunfo.c -o super_trunfo


 Executar
./super_trunfo

Exemplo de Uso
Digite os dados da carta 01:
Estado (sigla): SP
Código: A01
Nome da cidade: São Paulo
População: 12300000
Área (km²): 1521.11
PIB (em bilhões de reais): 699
Número de pontos turísticos: 30

Digite os dados da carta 02:
Estado (sigla): RJ
Código: B01
Nome da cidade: Rio de Janeiro
População: 6748000
Área (km²): 1200.27
PIB (em bilhões de reais): 365
Número de pontos turísticos: 25

--- MENU DE COMPARAÇÃO ---
1 - População
2 - Área
3 - PIB
4 - Número de pontos turísticos
5 - Densidade demográfica
Escolha: 1

--- RESULTADO ---
Comparação por População:
São Paulo: 12300000 habitantes
Rio de Janeiro: 6748000 habitantes
Vencedora: São Paulo (maior população)

Ao final do cadastro das cartas, o programa exibe o menu:

