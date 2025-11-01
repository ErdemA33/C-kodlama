#include <stdio.h>

int main() {
    int a, b, c, d;
    int toplam;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    toplam = (a % 10) + (b % 10) + (c % 10) + (d % 10);

    if (toplam == a)
        printf("1");
    else if (toplam == b)
        printf("2");
    else if (toplam == c)
        printf("3");
    else if (toplam == d)
        printf("4");
    else
        printf("0");

    return 0;
}

