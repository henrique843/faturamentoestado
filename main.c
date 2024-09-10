#include <stdio.h>

int main() {
    // Valores de faturamento por estado
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    // Cálculo do faturamento total
    float total = sp + rj + mg + es + outros;

    // Cálculo dos percentuais de representação
    float p_sp = (sp / total) * 100;
    float p_rj = (rj / total) * 100;
    float p_mg = (mg / total) * 100;
    float p_es = (es / total) * 100;
    float p_outros = (outros / total) * 100;

    // Exibição dos resultados
    printf("Percentual de representação por estado:\n");
    printf("SP: %.2f%%\n", p_sp);
    printf("RJ: %.2f%%\n", p_rj);
    printf("MG: %.2f%%\n", p_mg);
    printf("ES: %.2f%%\n", p_es);
    printf("Outros: %.2f%%\n", p_outros);

    return 0;
}