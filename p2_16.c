#include <stdio.h>

int main(){
        int x,y;
        scanf("%d%d", &x,&y);

        if(x>y){
                printf("1. daha büyüktür.");
        }
        else if(x<y){
                printf("2. daha büyüktür.");
        }
        else{
                printf("ikisi birbirine eşittir.");
        }

        return 0;
}
