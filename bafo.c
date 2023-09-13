# include <stdio.h>
# include <stdlib.h>

typedef enum {
    ALDO,
    BETO,
} VENCEDOR;

int main() {
    int n;
    scanf("%d", &n);
    VENCEDOR vencedores[n];
    for (int i=0 ; i<n ; i++) {

        int aldo, beto;
        scanf("%d %d", &aldo, &beto);

        if (aldo > beto) {
            vencedores[i] = ALDO;
        } else {
            vencedores[i] = BETO;
        }
    }
    int end;
    scanf("%d", &end);

    for (int i=0 ; i<n ; i++) {
        printf("Teste %d\n", i+1);
        if (vencedores[i] == ALDO) {
            printf("Aldo\n\n");
        } else {
            printf("Beto\n\n");
        }
    }
}