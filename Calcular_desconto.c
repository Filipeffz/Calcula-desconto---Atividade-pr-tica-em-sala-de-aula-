// Sistema de faturamento e tarifação residencial
// Objetivo: Calcular o valor final da conta de energia
// Data: 22/09/2026

#include <stdio.h>

int main()
{
    double consumo_kwh, tarifa_base, adicional_bandeira;
    double subtotal_bruto, desconto, taxa_iluminacao, valor_total;
    char bandeira, tarifa_social;

    taxa_iluminacao = 15.0;
    desconto = 0.0;

    // leitura de dados
    printf("Digite o consumo mensal em kWh: ");
    scanf("%lf", &consumo_kwh);

    printf("Digite a bandeira tarifaria vigente (V/A/R): ");
    scanf(" %c", &bandeira);

    printf("Possui cadastro na tarifa social? (S/N): ");
    scanf(" %c", &tarifa_social);

    // calculo da tarifa base
    if (consumo_kwh <= 100)
    {
        tarifa_base = 0.50 * consumo_kwh;
    }
    else if (consumo_kwh <= 300)
    {
        tarifa_base = 0.75 * consumo_kwh;
    }
    else
    {
        tarifa_base = 1.00 * consumo_kwh;
    }

    // adicional de bandeira tarifaria
    if (bandeira == 'V')
    {
        adicional_bandeira = 0.0;
    }
    else if (bandeira == 'A')
    {
        adicional_bandeira = 0.05 * consumo_kwh;
    }
    else if (bandeira == 'R')
    {
        adicional_bandeira = 0.10 * consumo_kwh;
    }

    subtotal_bruto = tarifa_base + adicional_bandeira;

    // desconto de tarifa social
    if (tarifa_social == 'S' && consumo_kwh <= 150)
    {
        desconto = 0.20 * subtotal_bruto;
    }
    else
    {
        desconto = 0.0;
    }

    // valor total final
    valor_total = (subtotal_bruto - desconto) + taxa_iluminacao;

    // saida de dados
    printf("Valor Base: R$ %.2f\n", tarifa_base);
    printf("Adicional de Bandeira: R$ %.2f\n", adicional_bandeira);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Taxa de Iluminacao Publica: R$ %.2f\n", taxa_iluminacao);
    printf("Valor Total da Fatura: R$ %.2f\n", valor_total);

    // alerta de consumo elevado
    if (consumo_kwh > 400)
    {
        printf("ALERTA: Consumo elevado! Verifique seus equipamentos.\n");
    }

    return 0;
}
