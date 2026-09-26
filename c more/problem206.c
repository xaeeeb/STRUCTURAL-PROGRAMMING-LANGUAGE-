#include <stdio.h>
#include <stdint.h>

int main() {

    int8_t a = 100;
    int16_t b = 30000;
    int32_t c = 2000000;
    int64_t d = 9000000000LL;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%lld\n", d);

    return 0;
}