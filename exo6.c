#include <stdio.h>
int main(){
	int f; int c;
	printf("Temperature en Farenheit: ");
	scanf("%d",&f);
	c= (((f-32)/9)*5);
	printf("Temperature en Celcius : %d \n",c);
	return 0;
}
