#include <stdio.h>

int main(void) 
{
    int sayi;
    printf("Lütfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    int i = 1;
    while (i <= 10) {
        printf("%d\n", i * sayi);
        i++;
    }

    return 0;
}
