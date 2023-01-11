#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char password[7];
    char charset[] = "0123456789";
    int len_charset = strlen(charset);
    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            int random_index = rand() % len_charset;
            password[j] = charset[random_index];
        }
        password[6] = '\0';
        printf("%s\n", password);
    }
    return 0;
}
