# include <stdio.h>
# include <stdlib.h>

void printVector(int n, int vector[]) {
    for (int i = 0; i<n; i++) {
        if (i==n-1) {
            printf("%d\n", vector[i]);
        } else {
            printf("%d ", vector[i]);
        }
    }
}

int countEven(int n, int vector[]) {
    int count = 0;
    for (int i=0; i<n; i++) {
        if (vector[i]%2==0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int vector[n];
    for (int i; i<n; i++) {
        scanf("%d", &vector[i]);
    }

    int evenCount = countEven(n, vector);
    int even[evenCount];
    int odd[n - evenCount];

    int ieven = 0;
    int iodd = 0;
    int i = 0;
    while (i<n) {
        if (vector[i]%2==0) {
            even[ieven] = vector[i];
            ieven++;
        } else {
            odd[iodd] = vector[i];
            iodd++;
        }
        i++;
    }

    printVector(evenCount, even);
    printVector(n-evenCount, odd);

}

