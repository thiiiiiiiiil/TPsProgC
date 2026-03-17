#include  <stdio.h> 
#include <math.h>
int main() {
	double i; double cr;
	scanf("%lf",&i);
	if (i<0) printf("Erreur\n");
	else {
		cr = sqrt(i);
		printf("Racine carré pour nombre %lf est %lf \n",i,cr);
	}
	return 0;
}
