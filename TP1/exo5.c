#include  <stdio.h>
int main() {
	int a; int b; int c;
	printf("A:\n");
	scanf("%d",&a);
	printf("B:\n");
	scanf("%d",&b);
	printf("Avant: a=%d, b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Apres: a=%d, b=%d\n",a,b);
	return 0;
}
