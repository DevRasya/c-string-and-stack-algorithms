#include <stdio.h>

int main() {

    int bil, nilai;
    int satuan = 1, hasil = 0;
    int stack[100], top = -1;

    printf("Masukkan Bilangan: ");
    scanf("%d", &bil);

    do
    {
    nilai = bil % 10;
    bil = bil / 10;
    stack[++top] = nilai;
    } while (bil != 0);

    while (top >= 0 ) {
        nilai = stack[top--];
        hasil = hasil + nilai * satuan;
        satuan *= 10;
    }
    
    printf("Hasil = %d\n", hasil);
    
    return 0;
}