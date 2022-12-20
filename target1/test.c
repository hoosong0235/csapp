#include <stdio.h>
#include <stdint.h>
int main(void) {
    int64_t setval[] = {
        0xc084d181, 0x9090d199, 0xc7c78948, 0xc391d189, 0x9258c254, 
        0x91e08948, 0xc78d4853, 0xdb08ce81, 0x90c78948, 0xc908c288, 
        0xd238c281, 0xc908ce09, 0xc2e08948, 0x90e08948
        };
    int64_t addval[] = {
        0x3c3876b8, 0x6fa78caf, 0x36873177, 0x24df2e73, 0x1f76b7bf, 
        0x6f6f3177, 0x36ff3d77, 0x3fc73177, 0x3c1f7638, 0x3f7b3d77, 
        0x381f76b8, 0x3c6d3177, 0x6f1f76f8, -0x3cc7c289, 0x2d9f3d77
        };
    int64_t getval[] = {
        0x909078fb, 0xc3905829, 0x90c2895c, 0xc048d189, 0xc1e08948,
        0xc938d189, 0xd208d199, 0xc9c4c289, 0xdb08d189, 0xc020ce88,
        0xd220ce8d
    };

    for (int i = 0; i < sizeof(setval) / sizeof(int64_t); i ++) {
        for (int j = 0; j < sizeof(addval) / sizeof(int64_t); j++) {

            int64_t val = setval[i] - addval[j];

            if (0x39000000 <= val && val < 0x40000000)
                printf("\n\n %x - %x = %x\n\n", setval[i], addval[j], val);
            printf("%x ", val);
        }
        printf("\n");
    }

    for (int k = 0; k < sizeof(getval) / sizeof(int64_t); k++) {

        int64_t val = getval[k];

        if (0x39000000 <= val && val < 0x40000000)
            printf("\n\n %x\n\n", val);
        printf("%x ", val);
    }

    return 1;
}