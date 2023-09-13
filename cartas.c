# include <stdio.h>
# include <stdbool.h>

bool compareCrescente(int posterior, int anterior) {
    return posterior > anterior;
}

bool compareDecrescente(int posterior, int anterior) {
    return posterior < anterior;
}

bool allMatch(int lista[5], bool (*comparator)(int, int)) {
    for (int i=0; i<4 ; i++) {
        if (!comparator(lista[i+1], lista[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    int cartas[5];
    scanf("%d %d %d %d %d", 
    &cartas[0], &cartas[1], &cartas[2], &cartas[3], &cartas[4]);
    bool isCrescente = allMatch(cartas, &compareCrescente);
    bool isDecrescente = allMatch(cartas, &compareDecrescente);
    if (isCrescente) {
        printf("C\n");
    } else if (isDecrescente) {
        printf("D\n");
    } else {
        printf("N\n");
    }
    return 0;
}

