# include <stdio.h>
# include <stdbool.h>

int main() {
    float preco_alcool, preco_gasolina, rendimento_alcool, rendimento_gasolina;
    scanf("%f %f %f %f", &preco_alcool, &preco_gasolina, &rendimento_alcool, &rendimento_gasolina);
    float eficiencia_alcool = rendimento_alcool/preco_alcool;
    float eficiencia_gasolina = rendimento_gasolina/preco_gasolina;
    if (eficiencia_alcool > eficiencia_gasolina) {
        printf("A\n");
    } else {
        printf("G\n");
    }
}