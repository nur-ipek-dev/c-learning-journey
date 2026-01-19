#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Lutfen uc adet sayi giriniz: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
    {
        printf("En buyuk sayi: %d\n", a);
    }
    else if(b >= a && b >= c)
    {
        printf("En buyuk sayi: %d\n", b);
    }
    else
    {
        printf("En buyuk sayi: %d\n", c);
    }

    return 0;
}
