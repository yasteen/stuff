#include <stdio.h>
#include <stdlib.h>

#include "calc/calculator.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: ./main [number_a] [number_b]\n");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int answer = add(a, b);
    printf("%d\n", answer);

    return 0;
}
