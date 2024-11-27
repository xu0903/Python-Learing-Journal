#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long sum = 0;

    scanf("%d", &n);
    char number[1024];
    for (int i = 0; i < n; i++) {
        scanf("%s", number);
        long long current_number = strtoll(number, NULL, 10);
        sum += current_number % 7;
    }

    printf("%lld\n", sum);
    return 0;
}
