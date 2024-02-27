#include<stdio.h>

int checkPrime(int n) {
	for(int i = 2; i * i <= n; i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

int countPrimeNumbers(int a, int b) {
	int cnt = 0;
	for(int i = a; i <= b; i++) {
		if(checkPrime(i)) cnt += 1;
	}
	return cnt;
	
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", countPrimeNumbers(a, b));
    return 0;
}