#include <stdio.h>

int main(void)
{
    int sayi;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    if(sayi % 2 == 0)
    {
        printf("%d sayisi cifttir.\n", sayi);
    }
    else
    {
        printf("%d sayisi tektir.\n", sayi);
    }

    return 0;
}
