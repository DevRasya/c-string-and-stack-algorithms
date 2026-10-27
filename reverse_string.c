#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    int i, length;

    printf("Masukkan kalimat: ");
    scanf(" %[^\n]", kalimat);

    length = strlen(kalimat);

    printf("Hasil kalimat terbalik: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }
    
    printf("\n");

    return 0;
}