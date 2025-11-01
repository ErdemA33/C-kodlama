#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);

	if(x % 4 == 0 && x % 100 == 1) printf("1");
	else printf("0");

	return 0;
}
