#include <stdio.h>

int main(void)
{
    int a;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &a);

    if(a % 2 == 0)
    {
        printf("%d sayisi cifttir.\n", a);
    }
    else
    {
        printf("%d sayisi tektir.\n", a);
    }

    return 0;
}
