#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100], stack[100], str;
    int i, length;
    int top = -1;

    printf("Masukkan kalimat: ");
    scanf(" %[^\n]", kalimat);

    length = strlen(kalimat);

    for (i = 0; i < length; i++) {
        top++;                  
        stack[top] = kalimat[i];  
    }

    printf("Hasil kalimat terbalik: ");
    while (top >= 0) {    
        str = stack[top]; 
        top--;               
        
        printf("%c", str);  
    }

    printf("\n");
    return 0;
}