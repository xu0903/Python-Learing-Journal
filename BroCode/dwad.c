#include <stdio.h>
#include <string.h>

int main() {
    int n;

    scanf("%d", &n);
    
    char number[1000];
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", number);
        int len = strlen(number);
        long long remainder = 0;

        for (int j = 0; j < len; j++) {
            remainder = (remainder * 10 + (number[j] - '0')) % 7;
        }

        sum += remainder;
    }

    printf("%lld\n", sum);
    return 0;
}
