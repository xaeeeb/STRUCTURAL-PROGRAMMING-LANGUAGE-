#include <stdio.h>
#include <stdint.h>

int main() {

    uint8_t a = 255;
    uint16_t b = 60000;
    uint32_t c = 4000000000U;
    uint64_t d = 9000000000ULL;

    printf("%u\n", a);
    printf("%u\n", b);
    printf("%u\n", c);
    printf("%llu\n", d);

    return 0;
}