# include <stdio.h>
# include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    bool impar = true;
    for (int i=0; i<n ; i++) {
        printf("THUMS THUMS THUMS");
        if (!impar) 
            printf(" THUMS THUMS THUMS");
        printf("\n");
        impar = !impar;
    }
}