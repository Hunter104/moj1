# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef enum {
    SOMA, SUBTRACAO
} OPERACAO;

int convertChar(char c) {
    return c-'0';
}

int main() {
    int m;
    scanf("%d", &m);

    int length = (m-1)+(3*m);
    char input[length];
    scanf("%s", input);

    int total = convertChar(input[0]);

    int i = 1;
    OPERACAO operacao;
    while (i<length) {

        if (input[i] == '+') {
            operacao=SOMA;
            i++;
            continue;
        }
        if (input[i] == '-') {
            operacao=SUBTRACAO;
            i++;
            continue;
        }

        int number = 0;
        while (input[i] >= '0' && input[i] <= '9') {
            number = 10*number + convertChar(input[i]);
            i++;
        }

        if (operacao==SUBTRACAO) {
            number *= -1;
        }
        total += number;
        i++;
    }
}
