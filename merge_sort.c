#include<stdio.h>

void merge_sort(int a[], int l, int r) {
    if(l < r) {
        int m = (l + r) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m + 1, r);
        merge(a, l, m , r);
    }
}

void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int x[n1], y[n2];
    for(int i = 0; i < n1; i ++) {
        x[i] = a[l + i];
    }
    for(int i = 0; i < n2; i++) {
        y[i] = a[m + i + 1];
    }
    int i = 0, j = 0, index = l;
    while(i < n1 && j < n2) {
        if(x[i] <= y[j]) a[index++] = x[i++];
        if(y[j] <= x[i]) a[index++] = y[j++];
    }
    while(i < n1) {
        a[index++] = x[i++];
    }
    while(j < n2) {
        a[index++] = y[j++];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    merge_sort(a, 0, n - 1);
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}