#include <stdio.h>

int main(void)
{
    int n, i, toplam = 0;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        toplam += i;
    }

    printf("Toplam = %d\n", toplam);

    return 0;
}
