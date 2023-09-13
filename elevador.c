# include <stdio.h>
# include <stdbool.h>

int main() {
    int leituras, capacidade;
    scanf("%d %d", &leituras, &capacidade);

    int qtd_pessoas = 0;
    bool excesso = false;
    for (int i=0; i<leituras ; i++) {
        int entrados, saidos;
        scanf("%d %d", &saidos, &entrados);
        qtd_pessoas = qtd_pessoas - saidos + entrados;
        if (qtd_pessoas > capacidade) {
            excesso = true;
        }
    }

    if (excesso) {
        printf("S\n");
    } else {
        printf("N\n");
    }
}
