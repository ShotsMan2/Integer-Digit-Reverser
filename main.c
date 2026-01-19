#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, ters = 0, kalan, isaret;

    printf("sayi girin ");
    scanf("%d", &sayi);

    isaret = 1;

    if (sayi < 0)
    {
        isaret = -1;
        sayi = -sayi;
    }

    for (; sayi > 0; sayi /= 10)
    {
        kalan = sayi % 10;
        ters = ters * 10 + kalan;
    }

    ters *= isaret;

    printf("sonuc %d", ters);
}
