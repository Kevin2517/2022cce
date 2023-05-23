#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if(n>0){
		if(m>0)
			printf("1\n");
		if(m<0)
			printf("4\n");
	}
	if(n<0){
		if(m>0)
			printf("2\n");
		if(m<0)
			printf("3\n");
}
}
