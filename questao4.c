#include <stdio.h>

int main() {
    float faturamento_total = 0;
    float faturamento_sp = 67836.43;
    float faturamento_rj = 36678.66;
    float faturamento_mg = 29229.88;
    float faturamento_es = 27165.48;
    float faturamento_outros = 19849.53;
    float perc_sp, perc_rj, perc_mg, perc_es, perc_outros;

    faturamento_total = faturamento_sp + faturamento_rj + faturamento_mg + faturamento_es + faturamento_outros;

    perc_sp = (faturamento_sp / faturamento_total) * 100;
    perc_rj = (faturamento_rj / faturamento_total) * 100;
    perc_mg = (faturamento_mg / faturamento_total) * 100;
    perc_es = (faturamento_es / faturamento_total) * 100;
    perc_outros = (faturamento_outros / faturamento_total) * 100;

    printf("Percentual de representação de cada estado:\n");
    printf("SP: %.2f%%\n", perc_sp);
    printf("RJ: %.2f%%\n", perc_rj);
    printf("MG: %.2f%%\n", perc_mg);
    printf("ES: %.2f%%\n", perc_es);
    printf("Outros: %.2f%%\n", perc_outros);

    return 0;
}
