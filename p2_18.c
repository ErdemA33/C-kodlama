#include <stdio.h>

int main(){
    int x, y;
    scanf("%d%d", &x, &y);

    if (x == y) {
        printf("eşit");
    }
    else if (y % x == 0) {
        printf("%d | %d", y, x); // y, x’in katı
    }
    else {
        printf("belirsiz");
    }

    return 0;
}
