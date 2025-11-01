#include <stdio.h>

int main(){
	int x,y,z,max;
	scanf("%d%d%d",&x,&y,&z);
	max = x*y;

	if(max< x*z)max = x*z;
	if(max<y*z)max = y*z;

	printf("%d",max);
	return 0;
}
