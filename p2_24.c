#include <stdio.h>

int main(){
	int kontrol,fiyat;

	scanf("%d%d", &kontrol, &fiyat);

	if(kontrol == 1){
		printf("%d",fiyat /100*90);
	
	}
	else if(kontrol == 2){
                printf("%d",fiyat /100*95);

        }
	else{
		printf("%d", fiyat / 100 * 99);
	} 
	return 0;
}
