#include <stdio.h>

int main(){
	int a,b,c,d,e;

	scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

	if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0 && d % 2 == 0 && e % 2 == 0){
		printf("cift sayılar");
	}
	else if(a % 2 == 1 && b % 2 == 1 && c % 2 == 1 && d % 2 == 1 && e % 2 == 1){
		printf("tek sayılar.");
	}
	else{
		printf("karişik");
	}

	return 0;
}
