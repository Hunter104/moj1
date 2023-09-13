int main() {
    int comprimento, distancia_por_pedagio;
    scanf("%d %d", &comprimento, &distancia_por_pedagio);

    int custo_por_km, valor_por_pedagio;
    scanf("%d %d", &custo_por_km, &valor_por_pedagio);

    int custo_gasolina = custo_por_km*comprimento;
    int qtd_pedagios = comprimento/distancia_por_pedagio;

    int custo_pedagios = qtd_pedagios*valor_por_pedagio;

    printf("%d\n", custo_gasolina+custo_pedagios);
    return 0;
}