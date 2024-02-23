#include<stdio.h>

void bubble_sort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        // i == 0, toi j = 3 <4 = n - i - 1
      for(int j = 0; j < n - 1; j++) {
        if(a[j] > a[j + 1]) {
            int tmp = a[j + 1];
            a[j + 1] = a[j]; a[j] = tmp;
        }
      }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n ; i++) {
        scanf("%d", &a[i]);
    } 
    bubble_sort(a, n);
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}