#include <stdio.h>
int main(){
	int a; int b; int c; int d; int e; int min; int max;
	printf("Saisissez 5 nombres: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if (a>b) max=a;
	if (max<c) max=c;
	if (max<d) max=d;
	if (max<e) max=e;

	if (a>b) min=b;
        if (min>c) min=c;
        if (min>d) min=d;
        if (min>e) min=e;
	printf("Min= %d, Max= %d", min,max);
	return 0;
}

//avec for avec 3 varibles
