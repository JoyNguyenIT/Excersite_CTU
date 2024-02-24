#include<stdio.h>

void insertsion_sort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int pos = i - 1;
        while(pos >= 0 && a[pos + 1] < a[pos]) {
            int tmp = a[pos];
            a[pos] = a[pos + 1]; a[pos + 1] = tmp; 
            --pos;
        }

    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    insertsion_sort(a, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}