#include<stdio.h>

int PascalTriangle(int i, int j) {
    if(j == 1 || j == i) return 1;
    else return PascalTriangle(i - 1, j) + PascalTriangle(i - 1, j - 1);
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", PascalTriangle(i, j));
        }
        printf("\n");
    }

    return 0;
}
