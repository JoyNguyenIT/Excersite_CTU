#include<stdio.h>

void selection_sort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minindex = i;
        for(int j = i + 1; j < n; j++) {
            if(a[j] < a[minindex]) {
                minindex = j;
            }
        }
        int tmp = a[i];
        a[i] = a[minindex]; a[minindex] = tmp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    selection_sort(a, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}