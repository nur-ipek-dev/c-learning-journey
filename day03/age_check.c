#include <stdio.h>

int main(void)
{
    int yas;

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);

    if(yas >= 18)
    {
        printf("%d yasi oy kullanmak icin uygundur.\n", yas);
    }
    else
    {
        printf("%d yasi oy kullanmak icin uygun degildir.\n", yas);
    }

    return 0;
}
