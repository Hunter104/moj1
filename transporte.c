#include <stdio.h>

int main() {
    int largura_conteiner, comprimento_conteiner, altura_conteiner;
    scanf("%d %d %d", &largura_conteiner, &comprimento_conteiner, &altura_conteiner);

    int largura_navio, comprimento_navio, altura_maxima;
    scanf("%d %d %d", &largura_navio, &comprimento_navio, &altura_maxima);

    int num_conteiners_largura = largura_navio/largura_conteiner;
    int num_conteiners_comprimento = comprimento_navio/comprimento_conteiner;
    int num_conteiners_altura = altura_maxima/altura_conteiner;

    int total_conteiner = num_conteiners_altura*num_conteiners_comprimento*num_conteiners_largura;
    printf("%d\n", total_conteiner);
}