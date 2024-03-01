#include<stdio.h>

int BinarySearch(int a[], int x, int n) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(a[mid] == x) {
            return 1;
        }
        else if(a[mid] < x) {
            left = mid + 1;
        }
        else{ 
            right = mid - 1;
        }
    }
    return 0;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    int a[n]; for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", BinarySearch(a, x, n));
    return 0;
}