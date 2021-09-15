#include <stdio.h>
#include <math.h>

void bin_to_dec(int bits, char binary[]) {
    int number = 0;
    for (int i = 0; i < bits; i++) {
        if (binary[i] == '1') {
            number += (int)pow(2, bits - 1 - i);
        }
    }
    printf("%d\n", number);
}

int main(void) {
    int number = 0;
    int bits = 0;
    char binary[33] = {0};

    while (1) {
        printf("Bitteja (negatiivinen arvo sulkee ohjelman): ");
        scanf("%d", &bits);

        if (bits < 0) {
            break;
        }

        printf("Anna binaariluku: ");
        scanf("%s", &binary);
        bin_to_int(bits, binary);
    }
    return 0;
}