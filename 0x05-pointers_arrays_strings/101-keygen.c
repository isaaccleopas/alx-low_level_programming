#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        int random_number = rand() % 1000000;
        printf("%06d\n", random_number);
    }
    return 0;
}
