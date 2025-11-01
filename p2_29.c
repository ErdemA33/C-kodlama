#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);

	if(a+b == c)printf("+");
	if(a*b == c)printf("*");
	if(a/b == c)printf("/");
	if(a-b == c)printf("-");
	else if(a % b == c)printf("mod");
	else printf("0");

	return 0;
}
