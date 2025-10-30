#include <stdio.h>

int main(){
        int n,sayi;
        scanf("%d%d", &n , &sayi);
        printf("%d\t%d", sayi / n + 1, sayi % n + 1);
        return 0;
}
