#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CountPrimes(int n) {
    if (n <= 2) return 0;

    int* primes = (int*) calloc(n + 1, sizeof(int));
    int i, j, len = sqrt(n) + 1, count = 0;

    for (i = 0; i <= n; i++) {
        primes[i] = 1;
    }
    primes[0] = 0;
    primes[1] = 0;

    for (i = 2; i * i <= n; i++) {
        if (primes[i]) {
            count++;
            for (j = i * i; j <= n; j += i) {
                primes[j] = 0;
            }
        }
    }

    for (i = len; i < n; i++) {
        if (primes[i]) count++;
    }
    free(primes);
    return count;
}

int main() {
    int n;
    printf("Enter value of n to find number of primes from 1 to n: ");
    scanf("%d", &n);
    int result = CountPrimes(n);
    printf("\nNumber of primes less than %d is %d\n", n, result);
    return 0;
}
