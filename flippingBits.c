#include <stdio.h>
#include <stdint.h>

uint32_t flippingBits(uint32_t n) {
    return ~n;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        uint32_t n;
        scanf("%u", &n);
        printf("%u\n", flippingBits(n));
    }

    return 0;
}
