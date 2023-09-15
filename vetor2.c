# include <stdio.h>
# include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int vector[n];
    for (int i; i<n; i++) {
        scanf("%d", &vector[i]);
    }
    printf("%d\n", min(n, vector));
}

int min(int n, int vector[]) {
    int min = 0;
    for (int i=1; i<n; i++) {
        if (vector[i] < min) {
            min = i;
        }
    }
    return min;
}