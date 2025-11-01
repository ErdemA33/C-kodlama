#include <stdio.h>

int main() {
    int gun, ay, yil, a;
    a = 0;

    scanf("%d%d%d", &gun, &ay, &yil);

    if (yil < 0 || yil > 10000)
        a += 1;
    else if (ay < 1 || ay > 12)
        a += 1;
    else if (gun < 1 || gun > 31)
        a += 1;
    else if (ay == 2 && gun > 29)
        a += 1;
    else if ((ay == 4 || ay == 6 || ay == 9 || ay == 11) && gun > 30)
        a += 1;

    if (a == 0)
        printf("1");
    else
        printf("0");

    return 0;
}

