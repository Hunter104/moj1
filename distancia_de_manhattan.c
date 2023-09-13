# include <stdio.h>
# include <stdlib.h>

int main() {
    int xi, yi, xf, yf;
    scanf("%d %d %d %d", &xi, &yi, &xf, &yf);
    int dx = abs(xf-xi);
    int dy = abs(yf-yi);
    printf("%d\n", dx+dy);
}