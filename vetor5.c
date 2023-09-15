# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>


bool checkIfContains(int n, int vector[], int check) {
    for (int i=0; i<n; i++) {
        if (vector[i]==check) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);

    int vector[n];
    for (int i; i<n; i++) {
        scanf("%d", &vector[i]);
    }

    int check;
    scanf("%d", &check);

    if (checkIfContains(n, vector, check)) {
        printf("pertence\n");
    } else {
        printf("nao pertence\n");
    }
}


