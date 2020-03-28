#include <stdio.h>

int main(void) {
    printf("Hello there\n");

    // assignment
    int i = 10;
    printf("i=%d\n", i);

    // iteration
    for(int j = 0; j < 20; j++) {
        printf("%d", j);
        if (j != 19) {
            printf(", ");
        }
    }

    // pointer
    int c = 24;
    int* d = &c;
    printf("\nPointing to: %p\n", d);

    printf(" DONE\n");
    return 0;
}
