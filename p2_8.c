#include <stdio.h>

int main(){
        int x,y,z;
        scanf("%d%d%d", &x,&y,&z);
        printf("%d", 3600*x + y*60 + z);
        return 0;
}
