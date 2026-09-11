# 💳 CalculaDesconto

Um programa simples em **C** que calcula o valor final de uma compra aplicando descontos com base no valor gasto e no tipo de cliente (comum ou VIP).

## 📋 Descrição

O programa solicita ao usuário:
1. O **valor da compra**
2. O **tipo de cliente** (`C` para comum ou `V` para VIP)

Com base nesses dados, calcula automaticamente o percentual de desconto, o valor do desconto e o valor final a ser pago.

## 📐 Regras de desconto

| Valor da compra | Cliente Comum | Cliente VIP |
|------------------|:---------------:|:-------------:|
| Até R$ 200,00    | 0%              | 5%            |
| Acima de R$ 200,00 | 10%           | 15%           |

## 🚀 Como executar

### Pré-requisitos
- Compilador C (GCC recomendado)

### Compilando e executando

```bash
gcc calculaDesconto.c -o calculaDesconto
./calculaDesconto
```

### Exemplo de uso

```
Digite o valor da compra: 250
Digite o tipo de cliente (C - comum, V - vip): V

--- Resumo da Compra ---
Valor original: R$ 250.00
Desconto: R$ 37.50
Valor final: R$ 212.50
```

## 🛠️ Tecnologias utilizadas

- Linguagem C
- Biblioteca padrão `stdio.h`

## 📄 Estrutura do código

- Leitura de dados via `scanf`
- Estruturas condicionais (`if` / `else`) aninhadas para definir o percentual de desconto
- Cálculo do desconto e valor final
- Exibição formatada do resumo da compra

## 👤 Autor

Desenvolvido por Filipe.

## 📝 Licença

Este projeto é de uso livre para fins de estudo e aprendizado.
