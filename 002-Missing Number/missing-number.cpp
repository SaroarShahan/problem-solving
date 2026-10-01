#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) != 1) return 0;

    long long expected_sum = (n * (n + 1)) / 2;
    long long actual_sum = 0;

    for (long long i = 0; i < n - 1; i++) {
        long long number;
        if (scanf("%lld", &number) != 1) return 0;
        actual_sum += number;
    }

    printf("%lld", expected_sum - actual_sum);

    return 0;
}