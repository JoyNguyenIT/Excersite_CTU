#include<stdio.h>
#include<math.h>

int cnt[10000001] = {0};

void counting_sort(int a[], int n) {
    int k = -1e9;
    for(int i = 0; i < n; i++) {
        k = fmax(k, a[i]);
    }
    for(int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }
    for(int i = 0; i <= k; i++) {
        for(int j = 0; j < cnt[i]; j++ ) {
            printf("%d ", i);
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
    counting_sort(a, n);
    return 0;
}