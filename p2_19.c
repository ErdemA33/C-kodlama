#include <stdio.h>

int main() {
    int l, g;

    scanf("%d%d", &l, &g);

    if (l > 0 && l < 35) {
        printf("kısa boylu.     ");
    }
    if (l >= 35 && l < 65) {
        printf("orta boylu.     ");
    }
    if (l >= 65 && l < 100) {
        printf("uzun boylu.     ");
    }

    if (g > 0 && g < 45) {
        printf("zayıf     ");
    }
    if (g >= 45 && g < 70) {
        printf("normal     ");
    }
    if (g >= 70 && g < 100) {
        printf("ağır   ");
    }

    return 0;
}
