#include <stdio.h>
#include <stdint.h>

int main() {

    const uint8_t mask0 = 0x01;
    const uint8_t mask1 = 0x02;
    const uint8_t mask2 = 0x04;
    const uint8_t mask3 = 0x08;
    const uint8_t mask4 = 0x10;
    const uint8_t mask5 = 0x20;
    const uint8_t mask6 = 0x40;
    const uint8_t mask7 = 0x80;

    uint8_t flags = 0b00001010;
    
    flags |= mask0;
    printf((flags & mask0) ? "ON\n" : "OFF\n");

    flags &= ~(mask1 | mask3);
    printf((flags & (mask1 | mask3) ? "ON\n" : "OFF\n"));

    flags ^= (mask0 | mask1);
    printf((flags & mask0) ? "ON\n" : "OFF\n");
    printf((flags & mask1) ? "ON\n" : "OFF\n");

    return 0;
}
