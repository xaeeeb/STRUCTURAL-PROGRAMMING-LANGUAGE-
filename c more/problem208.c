#include <stdio.h>
#include <stdint.h>

int main() {

    uint8_t battery = 87;

    printf("Battery level is %u out of 100\n",
           battery);

    return 0;
}