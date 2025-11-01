#include <stdio.h>

int main() {
    int a, b, c, d, e, tek, cift;

    tek = 0;
    cift = 0;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    a % 2 == 0 ? ++cift : ++tek;
    b % 2 == 0 ? ++cift : ++tek;
    c % 2 == 0 ? ++cift : ++tek;
    d % 2 == 0 ? ++cift : ++tek;
    e % 2 == 0 ? ++cift : ++tek;

    printf("%d tekler\n", tek);
    printf("%d çiftler\n", cift);

    return 0;
}



